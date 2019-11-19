// Lista en C++
// (C) Abril 2001, Salvador Pozo
// C con Clase: http://c.conclase.net

#include <iostream>
using namespace std;

class nodo {
   public:
    nodo(int v, nodo *sig = NULL)
    {
       valor = v;
       siguiente = sig;
    }

   private:
    int valor;
    nodo *siguiente;
   friend class lista;
};

typedef nodo *pnodo;

class lista {
   public:
    lista() { primero = actual = NULL; }
    ~lista();

    void Insertar(int v);
    void Borrar(int v);
    bool ListaVacia() { return primero == NULL; }
    void Mostrar();
    void Siguiente();
    void Primero();
    void Ultimo();
    bool Actual() { return actual != NULL; }
    int ValorActual() { return actual->valor; }

   private:

    pnodo primero;
    pnodo actual;
};

lista::~lista()
{
   pnodo aux;

   while(primero) {
      aux = primero;
      primero = primero->siguiente;
      delete aux;
   }
   actual = NULL;
}

void lista::Insertar(int v)
{
   pnodo anterior;

   // Si la lista está vacía
   if(ListaVacia() || primero->valor > v) {
      // Asignamos a lista un nievo nodo de valor v y
      // cuyo siguiente elemento es la lista actual
      primero = new nodo(v, primero);
   }
   else {
      // Buscar el nodo de valor menor a v
      anterior = primero;
      // Avanzamos hasta el último elemento o hasta que el siguiente tenga
      // un valor mayor que v
      while(anterior->siguiente && anterior->siguiente->valor <= v)
         anterior = anterior->siguiente;
      // Creamos un nuevo nodo después del nodo anterior, y cuyo siguiente
      // es el siguiente del anterior
      anterior->siguiente = new nodo(v, anterior->siguiente);
   }
}

void lista::Borrar(int v)
{
   pnodo anterior, nodo;

   nodo = primero;
   anterior = NULL;
   while(nodo && nodo->valor < v) {
      anterior = nodo;
      nodo = nodo->siguiente;
   }
   if(!nodo || nodo->valor != v) return;
   else { // Borrar el nodo
      if(!anterior) // Primer elemento
         primero = nodo->siguiente;
      else  // un elemento cualquiera
         anterior->siguiente = nodo->siguiente;
      delete nodo;
   }
}

void lista::Mostrar()
{
   nodo *aux;

   aux = primero;
   while(aux) {
      cout << aux->valor << "-> ";
      aux = aux->siguiente;
   }
   cout << endl;
}

void lista::Siguiente()
{
   if(actual) actual = actual->siguiente;
}

void lista::Primero()
{
   actual = primero;
}

void lista::Ultimo()
{
   actual = primero;
   if(!ListaVacia())
      while(actual->siguiente) Siguiente();
}

int main()
{
   lista Lista;

   Lista.Insertar(20);
   Lista.Insertar(10);
   Lista.Insertar(40);
   Lista.Insertar(30);

   Lista.Mostrar();

   cout << "Lista de elementos:" << endl;
   Lista.Primero();
   while(Lista.Actual()) {
      cout << Lista.ValorActual() << endl;
      Lista.Siguiente();
   }
   Lista.Primero();
   cout << "Primero: " << Lista.ValorActual() << endl;

   Lista.Ultimo();
   cout << "Ultimo: " << Lista.ValorActual() << endl;

   Lista.Borrar(10);
   Lista.Borrar(15);
   Lista.Borrar(45);
   Lista.Borrar(30);
   Lista.Borrar(40);

   Lista.Mostrar();

   cin.get();
   return 0;
}
