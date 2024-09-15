/*
problema: https://omegaup.com/arena/problem/Maximo-Podador/#problems
  */

#include <bits/stdc++.h>
using namespace std;

char v[1001][1001];
int maximo, n, m;

void busca(int x, int y, int a, int d) /// 0 derecha  1 izquierda
{
    if (v[x][y] == '#' || x >= m || y >= n || x < 0 || y < 0)
        return;
    if (v[x][y] == 'T')
    {
        a++;
        if (a > maximo)
            maximo = a;
    }

    if (d == 0)
    {
        busca(x, y + 1, a, 0);
        busca(x + 1, y, a, 1);
    }
    else
    {
        busca(x, y - 1, a, 1);
        busca(x + 1, y, a, 0);
    }
}

main()
{
    int t, i, j, k;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        scanf("%d %d", &m, &n);
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
            {
                scanf(" %c", &v[i][j]);
            }
        busca(0, 0, 0, 0);
        printf("%d\n", maximo);
        maximo = 0;
    }
}
