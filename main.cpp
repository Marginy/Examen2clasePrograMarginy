#include <vector>
#include "Nodo.h"
#include "Lista.h"
#include "ArbolBinario.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    cout<<"====Ejercicio arboles===="<<endl;
    ArbolBinario arbol;
    cout<<"Pruebas exists()"<<endl;
    cout<<"4?\t"<<arbol.exists(arbol.padre,4)<<endl;
    cout<<"3?\t"<<arbol.exists(arbol.padre,3)<<endl;
    cout<<"1?\t"<<arbol.exists(arbol.padre,1)<<endl;
    cout<<"9?\t"<<arbol.exists(arbol.padre,9)<<endl;
    cout<<"Pruebas getSize()"<<endl;
    cout<<"padre?\t"<<arbol.getSize(arbol.padre)<<endl;
    cout<<"hijo izq?\t"<<arbol.getSize(arbol.padre->hijo_izq)<<endl;
    cout<<"hijo der?\t"<<arbol.getSize(arbol.padre->hijo_der)<<endl;

    cout<<"====Ejercicio listas===="<<endl;
    Lista* lista=new Lista;
    cout<<"Prueba leerLista()"<<endl;
    lista->leerLista();
    cout<<"Prueba imprimirLista()"<<endl;
    lista->imprimirLista();
    cout<<"Prueba agregarNodo()"<<endl;
    lista->agregarNodo(new Nodo("Pedro",430));
    lista->agregarNodo(new Nodo("Pablo",650));
    cout<<"Pruebas escribirLista()"<<endl;
    lista->escribirLista();
    cout<<"Reinicializar lista"<<endl;
    delete lista;
    lista = new Lista;
    lista->leerLista();
    cout<<"Prueba imprimirLista() de nuevo"<<endl;
    lista->imprimirLista();

    return 0;
}
