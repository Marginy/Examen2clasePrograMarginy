#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <fstream>
#include "Nodo.h"

using namespace std;

class Lista
{
    public:
        Nodo*principio;
        Lista();
        void agregarNodo(Nodo*nodo);
        void agregarNodo(Nodo*nodo,int pos);
        void imprimirLista();
        void leerLista();
        void escribirLista();
        ~Lista();
    protected:
    private:
};

#endif // LISTA_H
