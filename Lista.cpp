#include "Lista.h"

#include "Lista.h"

Lista::Lista()
{
    principio=NULL;
}

void Lista::agregarNodo(Nodo*nodo)
{
    if(principio==NULL)
    {
        principio=nodo;
    }else
    {
        Nodo*temp=principio;
        while(temp->siguiente!=NULL)
        {
            temp=temp->siguiente;
        }
        temp->siguiente=nodo;
    }
}

void Lista::agregarNodo(Nodo*nodo,int pos)
{
    if(nodo->nombre=="")
        return;
    if(principio==NULL || pos==0)
    {
        nodo->siguiente=principio;
        principio=nodo;
    }else
    {
        Nodo*temp=principio;
        int i=0;
        while(temp->siguiente!=NULL
              && i<pos-1)
        {
            temp=temp->siguiente;
            i++;
        }

        nodo->siguiente=temp->siguiente;
        temp->siguiente=nodo;
    }
}

void Lista::imprimirLista()
{
    if(principio == NULL)
        return;
    Nodo*temp = principio;
    cout<<temp->nombre<<"\t"<<temp->score<<endl;
    while(temp->siguiente != NULL)
    {
        cout<<temp->siguiente->nombre<<"\t"<<temp->siguiente->score<<endl;
        temp = temp->siguiente;
    }
}

void Lista::leerLista()
{
    ifstream in("scores.txt");

    while(!in.eof())
    {
        string nombre;
        int puntaje;
        in>>nombre;
        in>>puntaje;
        if(nombre != "" && puntaje != NULL)
            agregarNodo(new Nodo(nombre, puntaje));
        nombre = "";
        puntaje = NULL;
    }
}

void Lista::escribirLista()
{
    ofstream out("scores.txt");
    out.app;
    if(principio == NULL)
        return;
    Nodo*temp = principio;
    out<<temp->nombre<<" "<<temp->score<<endl;
    while(temp->siguiente != NULL)
    {
        out<<temp->siguiente->nombre<<" "<<temp->siguiente->score<<endl;
        temp = temp->siguiente;
    }
}

Lista::~Lista()
{
    for(Nodo*temp=principio;
        temp!=NULL;
        )
    {
        Nodo*temp2=temp;
        temp=temp->siguiente;
        delete temp2;
    }
    return;
}
