#include "Nodo.h"

Nodo::Nodo(string nombre,int score)
{
    this->nombre=nombre;
    this->score=score;
    this->siguiente=NULL;
}

Nodo::~Nodo()
{
    //dtor
}
