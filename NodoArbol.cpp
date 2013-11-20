#include "NodoArbol.h"

NodoArbol::NodoArbol(int numero)
{
    this->numero=numero;
    this->hijo_izq=0;
    this->hijo_der=0;
}

NodoArbol::~NodoArbol()
{
    //dtor
}
