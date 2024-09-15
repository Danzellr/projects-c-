/*

problema: https://omegaup.com/arena/problem/hojas/#problems

  */

#include <bits/stdc++.h>
using namespace std;
struct nodo
{
    int dato;
    nodo *izq;
    nodo *der;
};
nodo *crear(int n)
{
    nodo *nuevo = new nodo();
    nuevo->dato = n;
    nuevo->izq = nullptr;
    nuevo->der = nullptr;
    return nuevo;
}
void insertar(nodo *&arbol, int n)
{
    if (arbol == nullptr)
    {
        arbol = crear(n);
        return;
    }
    else
    {
        int raiz = arbol->dato;
        if (n < raiz)
        {
            insertar(arbol->izq, n);
        }
        else if (n > raiz)
        {
            insertar(arbol->der, n);
        }
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

int main()
{
    int a, arr[100001];
    cin >> a;
    nodo *arbol = nullptr;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, arr + a);

    for (int i = 0; i < a; i++)
    {
        insertar(arbol, arr[i]);
    }
    preorden(arbol);
}
