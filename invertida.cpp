/*
problema:: https://omegaup.com/arena/problem/Palindromos/#problems
  */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string palindroma(string palabra) {
    string palabraInvertida = palabra;
    reverse(palabraInvertida.begin(), palabraInvertida.end());

    if (palabraInvertida == palabra) {
        return "P";
    } else {
        return "NP";
    }
}

int main() {
    int a;
    cin >> a;

    cin.ignore(); 

    for (int i = 0; i < a; i++) {
        string palabra;
        getline(cin, palabra);

        transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);

        cout << palindroma(palabra)<<endl;
    }

    return 0;
}
