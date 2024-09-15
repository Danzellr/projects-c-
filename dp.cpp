/*
problema: https://omegaup.com/arena/problem/Mandarino-Up/#problems
  */
#include <iostream>
using namespace std;
int N, C, arr1[int(1e5) + 5], arr2[int(1e5) + 5], escaleras, elevador;
long long DP[3][int(1e5) + 5];
int main()
{
    cin >> N >> C;
    for (int c = 0; c < N - 1; c++)
    {
        cin >> arr1[c];
    }
    for (int c = 0; c < N - 1; c++)
        cin >> arr2[c];
    DP[1][0] = arr2[0] + C;
    for (int c = 1; c < N; c++)
    {
        DP[0][c] = min(DP[0][c - 1], DP[1][c - 1]) + arr1[c - 1];
        DP[1][c] = min(DP[0][c - 1] + C, DP[1][c - 1]) + arr2[c - 1];
    }

    for (int c = 0; c < N; c++)
    {
        cout << min(DP[0][c], DP[1][c]) << " ";
    }
}
