/*
problema: https://omegaup.com/arena/problem/Nodos-alcanzables/#problems
  */
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool existeCamino(int N, const vector<pair<int, int>>& enlaces) {
    vector<vector<int>> grafo(N);
    for (const auto& enlace : enlaces) {
        int x = enlace.first;
        int y = enlace.second;
        grafo[x].push_back(y);
    }
    vector<bool> visitado(N, false);
    queue<int> cola;
    cola.push(0);
    visitado[0] = true;
    while (!cola.empty()) {
        int nodoActual = cola.front();
        cola.pop();

        for (int vecino : grafo[nodoActual]) {
            if (!visitado[vecino]) {
                cola.push(vecino);
                visitado[vecino] = true;
            }
        }
    }
    return visitado[N - 1];
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> enlaces(M);
    for (int i = 0; i < M; ++i) {
        int x, y;
        cin >> x >> y;
        enlaces[i] = make_pair(x, y);
    }
    int resultado = existeCamino(N, enlaces);

    cout << resultado << endl;

    return 0;
}
