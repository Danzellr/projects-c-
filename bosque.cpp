/*


problema: https://omegaup.com/arena/problem/COMI-Paseo-por-el-Bosque/#problems/COMI-Paseo-por-el-Bosque/show-run:8a2f88497149ea35c8f9726c697bd031

  */

#include <bits/stdc++.h>
using namespace std;

struct nodo
{
    int dato;
    nodo *izq;
    nodo *der;
};
void insertarnodo(nodo *&, int);
nodo *crear(int);
void inorden(nodo *);
void preorden(nodo *);
void postorden(nodo *);

int main()
{
    int dato, j, contador = 0;
    cin >> j;
    nodo *arbol = nullptr;
    int i = 0;
    while (i < j)
    {

        cin >> dato;
        insertarnodo(arbol, dato);
        i++;
    }

    preorden(arbol);
    cout << endl;
    inorden(arbol);
    cout << endl;
    postorden(arbol);
}

nodo *crear(int n)
{
    nodo *nuevo = new nodo;
    nuevo->dato = n;
    nuevo->der = nullptr;
    nuevo->izq = nullptr;

    return nuevo;
}
void insertarnodo(nodo *&arbol, int n)
{

    if (arbol == nullptr)
    {

        arbol = crear(n);
    }
    else
    {
        int raiz = arbol->dato;
        if (n < raiz)
        {

            insertarnodo(arbol->izq, n);
        }
        else if (n > raiz)
        {

            insertarnodo(arbol->der, n);
        }
    }
}

void inorden(nodo *arbol)
{
    if (arbol != nullptr)
    {
        inorden(arbol->izq);
        cout << arbol->dato << " ";
        inorden(arbol->der);
    }
}
void preorden(nodo *arbol)
{
    if (arbol != nullptr)
    {
        cout << arbol->dato << " ";
        preorden(arbol->izq);
        preorden(arbol->der);
    }
}
void postorden(nodo *arbol)
{
    if (arbol != nullptr)
    {
        postorden(arbol->izq);
        postorden(arbol->der);
        cout << arbol->dato << " ";
    }
}
