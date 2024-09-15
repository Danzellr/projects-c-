/*
problema: https://omegaup.com/arena/problem/Factorial-Simple/#problems
  */
#include <iostream>
#include <vector>
#pragma GCC target ("avx2")
#pragma GCC optimize("Ofast")

void multiplicar(std::vector<int>& numeroGrande, int multiplicador) {
    int carry = 0;
    for (size_t i = 0; i < numeroGrande.size(); ++i) {
        int producto = numeroGrande[i] * multiplicador + carry;
        numeroGrande[i] = producto % 10;
        carry = producto / 10;
    }

    while (carry) {
        numeroGrande.push_back(carry % 10);
        carry /= 10;
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    long long int numero;
    std::cin >> numero;

    if (numero < 0) {
        std::cerr << "Error: Ingrese un número no negativo." << std::endl;
        return 1;
    }

    std::vector<int> resultado;
    resultado.push_back(1);

    for (long long int i = 2; i <= numero; ++i) {
        multiplicar(resultado, i);
    }

    for (auto it = resultado.rbegin(); it != resultado.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    return 0;
}
