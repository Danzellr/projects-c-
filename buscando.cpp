/*
problema: https://omegaup.com/arena/problem/Buscando-elementos/#problems
  */
#include <bits/stdc++.h>
using namespace std;
int a, i, j, arr[10000];
int main()
{
    int mayor = 0, menor = 0;
    cin >> a;
    for (i = 0; i < a; i++)
    {
        cin >> j;
        arr[j] = 1;
        if (i == 0)
        {
            menor = j;
        }
        if (mayor < j)
        {
            mayor = j;
        }
        if (menor > j)
        {
            menor = j;
        }
    }

    for (i = menor; i <= mayor; i++)
    {
        if (arr[i] != 1)
        {
            cout << i << " ";
        }
    }
}
