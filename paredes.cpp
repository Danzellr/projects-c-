/*
problema : https://omegaup.com/arena/problem/gfd-isaac-paredes/#problems
  */
#include <iostream>
#include <iomanip> 

int main() {
    int hitsExitosos, oportunidadesAlBate;
    std::cin >> hitsExitosos >> oportunidadesAlBate;
    if (oportunidadesAlBate <= 0) {
        std::cout << "0.00" << std::endl;
        return 0;
    }
    
    if (hitsExitosos < 0 || hitsExitosos > oportunidadesAlBate) {
        std::cout << "0.00" << std::endl;
        return 0;
    }
    double efectividad = static_cast<double>(hitsExitosos) / oportunidadesAlBate * 100.0;
    std::cout << std::fixed << std::setprecision(2) << efectividad << std::endl;
    return 0;
}
