#ifndef NODOARBOL_H
#define NODOARBOL_H

class NodoArbol
{
    public:
        int numero;
        NodoArbol* hijo_izq;
        NodoArbol* hijo_der;
        NodoArbol(int numero);
        virtual ~NodoArbol();
    protected:
    private:
};

#endif // NODOARBOL_H
