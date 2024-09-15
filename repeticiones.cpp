/*
problema:: https://omegaup.com/arena/problem/CR-Buscando-repeticiones/#problems
  */
#include <iostream>
#include <string>
#include <sstream>

int contarRepeticiones(const std::string& palabra, const std::string& texto) {
    int contador = 0;
    std::stringstream ss(texto);
    std::string token;
    while (ss >> token) {
        std::string palabra_minusculas = palabra;
        std::string token_minusculas = token;
        for (char& c : palabra_minusculas) {
            c = std::tolower(c);
        }
        for (char& c : token_minusculas) {
            c = std::tolower(c);
        }
        if (palabra_minusculas == token_minusculas) {
            contador++;
        }
    }
    return contador;
}

int main() {
    std::string palabra, texto;
    
    std::cin >> palabra;
    std::cin.ignore();

    std::getline(std::cin, texto);

    int repeticiones = contarRepeticiones(palabra, texto);
    if (repeticiones == 1) {
        std::cout << palabra << " se repite " << repeticiones << " vez." << std::endl;
    } else {
        std::cout << palabra << " se repite " << repeticiones << " veces." << std::endl;
    }

    return 0;
}
