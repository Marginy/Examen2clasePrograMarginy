#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include <iostream>
using namespace std;
#include "NodoArbol.h"

class ArbolBinario
{
    public:
        NodoArbol*padre;
        ArbolBinario();
        void imprimir(NodoArbol*padre);
        bool exists(NodoArbol*padre,int numero);
        int getSize(NodoArbol*padre);
        virtual ~ArbolBinario();
    protected:
    private:
};

#endif // ARBOLBINARIO_H
