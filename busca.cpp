/*

problema: https://omegaup.com/arena/problem/Derrames/#problems

  */
#include <bits/stdc++.h>
using namespace std;
int i, g, a, b;
char ma[101][101];
bool ma2[101][101] = {false};

void busca(int, int);

int main()
{
    cin >> a >> b;
    for (i = 0; i < a; i++)
    {

        for (g = 0; g < b; g++)
        {

            cin >> ma[i][g];
        }
    }

    int con = 0;

    for (i = 0; i < a; i++)
    {

        for (g = 0; g < b; g++)
        {

            if (ma2[i][g] == false && ma[i][g] == '@')
            {
                con++;
                busca(i, g);
            }
        }
    }

    cout << con;
}

void busca(int n, int j)
{

    if (n < 0 || j < 0 || n >= a || j >= b)
    {

        return;
    }
    if (ma2[n][j] == true || ma[n][j] == '*')
    {

        return;
    }
    if (ma[n][j] == '@')
    {
        ma2[n][j] = true;
        busca(n + 1, j);
        busca(n - 1, j);
        busca(n, j + 1);
        busca(n, j - 1);
        busca(n + 1, j + 1);
        busca(n - 1, j - 1);
        busca(n + 1, j - 1);
        busca(n - 1, j + 1);
    }
}
