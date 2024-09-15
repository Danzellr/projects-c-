#include <iostream>
/*
problema:: https://omegaup.com/arena/problem/Buscando-una-estrella/#problems
  */
#include <queue>
#include <vector>
using namespace std;
long long R, L, N;
unsigned long long aux; 
char H;
priority_queue<unsigned long long, vector<unsigned long long>, greater<unsigned long long> >Q;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); 
    cin >> N;
    for (int c = 0; c < N; c++) {
        cin >> H;
        if (H == 'R') {
            cin >> aux;
            Q.push(aux);
        }
        else if (H == 'S') {
            if (Q.size() >= 3) {
                R = Q.top();
                Q.pop();
                L = Q.top();
                Q.pop();
                cout << R << " " << L << " " << Q.top() << '\n';
                Q.push(L), Q.push(R);
            }
        else cout << "NO HAY SUFICIENTES PUNTAJES\n";
        }
        else if (H == 'B' && Q.size() > 0)
            Q.pop();
    }
    if (Q.size() == 0)
        cout << "NO HUBO GANADOR";
    else {
        while(Q.size() > 1)
            Q.pop();
        cout << "EL PUNTAJE MAS ALTO FUE " << Q.top();
    }
}
