/*
problema:: https://omegaup.com/arena/problem/CR-Angry-Birds/#problems
  */

#include <iostream>
#include <string>

int contarEstrellas(std::string nivel) {
    int total = 0;
    for (char c : nivel) {
        if (c == 'o') {
            total++;
        }
    }
    return total;
}

int main() {
    std::string nivel;
    int totalEstrellas = 0;

    while (std::cin >> nivel) {
        totalEstrellas += contarEstrellas(nivel);
    }

    std::cout  << totalEstrellas << std::endl;

    return 0;
}
