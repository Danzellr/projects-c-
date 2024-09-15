/*
problema:: https://omegaup.com/arena/problem/Fibonacci-gigante/#problems
*/
#include<bits/stdc++.h>
#pragma GCC  tarrget("avx2")
#pragma GCC  optimize("Ofast")
using namespace std;

int con = 0;
long long int resultados[10000000];
long long int memo[10000000];

long long int fibo(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }

    if (memo[x] != -1) {
        return resultados[x];
    }
    long long int resultado = fibo(x - 1) + fibo(x - 2);
    cout<<resultado<<" ";
    memo[x] = 1;
    resultados[x] = resultado;
    return resultado;
}

int main() {
    memset(memo, -1, sizeof(memo)); 
   long long int g;
    cin >> g;
    cout<<"1";
    fibo(g);
    return 0;
}
