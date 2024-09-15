
/*
proeblema : https://omegaup.com/arena/problem/Informados-de-las-medidas-de-hig/#problems
*/

/*

resuleto con frecuencias 

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> nuevasPersonas(N);
    vector<int> preguntas(M);

    for (int i = 0; i < N; ++i) {
        cin >> nuevasPersonas[i];
    }

    for (int i = 0; i < M; ++i) {
        cin >> preguntas[i];
    }
    vector<int> acumulativo(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        acumulativo[i + 1] = acumulativo[i] + nuevasPersonas[i];
    }
    for (int i = 0; i < M; ++i) {
        int totalRequerido = preguntas[i];
        int izquierda = 1, derecha = N, dia = -1;
        while (izquierda <= derecha) {
            int medio = izquierda + (derecha - izquierda) / 2;

            if (acumulativo[medio] >= totalRequerido) {
                dia = medio;
                derecha = medio - 1;
            } else {
                izquierda = medio + 1;
            }
        }

        cout << dia << " ";
    }
}*/



/*
resuelto con dp

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> nuevasPersonas(N);
    vector<int> preguntas(M);

    for (int i = 0; i < N; ++i) {
        cin >> nuevasPersonas[i];
    }

    for (int i = 0; i < M; ++i) {
        cin >> preguntas[i];
    }
    vector<int> acumulativo(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        acumulativo[i + 1] = acumulativo[i] + nuevasPersonas[i];
    }
    vector<int> dp(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        dp[i] = dp[i - 1] + nuevasPersonas[i - 1];
    }

    vector<int> respuestas;

    for (int i = 0; i < M; ++i) {
        int totalRequerido = preguntas[i];
        int dia = lower_bound(dp.begin(), dp.end(), totalRequerido) - dp.begin();

        respuestas.push_back(dia);
    }
    for (int i = 0; i < M; ++i) {
        cout << respuestas[i] << " ";
    }

    return 0;
}

*/
