/*
problema: https://omegaup.com/arena/problem/Minecraft-2D/#problems
*/
#include<bits/stdc++.h>
using namespace std;

int a, b;
bool ma2[1000][1000] = {false};

vector<vector<int>> espejo;
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const string dirs[] = {"ARRIBA", "ABAJO", "IZQUIERDA", "DERECHA"};

void bfs(vector<vector<int>>& matriz, pair<int,int> inicio, pair<int,int> fin) {
    vector<vector<string>> dir(a, vector<string>(a, "")); 

    queue<pair<int, int>> q;
    q.push(inicio);

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = current.first + dx[i];
            int ny = current.second + dy[i];

            if (nx >= 0 && nx < a && ny >= 0 && ny < a && matriz[nx][ny] == 1) {
                if (dir[nx][ny] == "") {
                    dir[nx][ny] = dirs[i];
                    q.push({nx, ny});
                }
            }
        }
    }
    vector<string> camino;
    pair<int, int> current = fin;
    
    while (current != inicio) {
        camino.push_back(dir[current.first][current.second]);
        int nx = current.first - dx[distance(dirs, find(dirs, dirs + 4, dir[current.first][current.second]))];
        int ny = current.second - dy[distance(dirs, find(dirs, dirs + 4, dir[current.first][current.second]))];
        current = {nx, ny};
    }
    for (int i = camino.size() - 1; i >= 0; --i) {
        cout << camino[i] << endl;
    }
}

int main() {
    int i, j;
    cin >> a;
    vector<vector<char>> ma(a, vector<char>(a));
    espejo.resize(a, vector<int>(a, 0));

    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            cin >> ma[i][j];

            if (ma[i][j] == '#') {
                espejo[i][j] = 0;
            } else if (ma[i][j] == '.' || ma[i][j] == 'H' || ma[i][j] == 'X') {
                espejo[i][j] = 1;
            }
        }
    }

    int ban1 = 0, ban2 = 0;
    pair<int, int> casa;
    pair<int, int> su;

    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            if (ma[i][j] == 'H') {
                casa.first = i;
                casa.second = j;
                ban1 = 1;
            }
            if (ma[i][j] == 'X') {
                su.first = i;
                su.second = j;
                ban2 = 1;
            }
        }
        if (ban1 && ban2) {
            break;
        }
    }

    bfs(espejo, su, casa);

    return 0;
}
