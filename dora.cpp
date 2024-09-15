/*
problema :: https://omegaup.com/arena/problem/Dora-la-Exploradora-A/#problems
*/
#include<bits/stdc++.h>
using namespace std;

char ma[1000][1000];
int a, b, i, j;
bool espejo[1000][1000];

void rellena(int x, int y) {
    if (x < 0 || y < 0 || x >= a || y >= b || ma[x][y] == '*' || espejo[x][y] ) {
        return;
    }

        espejo[x][y] = true;
        ma[x][y] = '#';

        rellena(x, y + 1);
        rellena(x, y - 1);
        rellena(x - 1, y);
        rellena(x + 1, y);

}

int main() {
    cin >> a >> b;

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            cin >> ma[i][j];
        }
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            if (ma[i][j] == '#') {
                rellena(i, j);
                break;
            }
        }
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            cout << ma[i][j];
        }
        cout << endl;
    }

    return 0;
}
