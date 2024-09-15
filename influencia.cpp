/*
problema: https://omegaup.com/arena/problem/El-regreso-de-la-Influenza-AH1N1/#problems
  */
#include <bits/stdc++.h>
using namespace std;
int a, b, a1, b1, isla = 0, bandera = 0;
char arr[1001][1001];
bool arr2[1001][1001];

void busca(int a1, int b1)
{
    if (a1 < 0 || b1 < 0 || a1 == a || b1 == b || arr2[a1][b1] == true || arr[a1][b1] == '.')
    {

        return;
    }
    if (arr[a1][b1] == 'x')
    {
        bandera = 1;
    }
    arr2[a1][b1] = true;
    busca(a1 + 1, b1);
    busca(a1 - 1, b1);
    busca(a1, b1 + 1);
    busca(a1, b1 - 1);
    return;
}

int main()
{
    int i, j;
    cin >> a;
    cin >> b;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {

            cin >> arr[i][j];
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (arr[i][j] != '.' && arr2[i][j] == false)
            {
                bandera = 0;
                busca(i, j);

                if (bandera == 0)
                {
                    isla++;
                }
            }
        }
    }

    if (isla <= 0)
    {
        cout << "0";
    }
    else
    {
        cout << isla - 1;
    }
}
