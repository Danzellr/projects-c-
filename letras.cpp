/*
problema: https://omegaup.com/arena/problem/Tin-Marin-basico/#problems
  */
#include <iostream>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> personas(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> personas[i];
    }

    int eliminado = 0; 

    for (int i = 1; i <= K; ++i) {
        int palabras = i; 
    
        if (palabras > N) {
            palabras = palabras % N;
        }
        if (i == K) {
            eliminado = palabras - 1; 
        }
    }

    std::cout << personas[eliminado] << std::endl;

    return 0;
}
