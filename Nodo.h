#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <string>
using namespace std;

class Nodo
{
    public:
        string nombre;
        int score;
        Nodo*siguiente;
        Nodo(string nombre,int score);
        void setSiguiente(Nodo*siguiente);
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H
