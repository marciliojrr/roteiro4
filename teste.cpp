#include <iostream>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int jogadas;
    std::cout << "Digite o Numero De Jogadas " ;
    std::cin >> jogadas;

    for ( int i = 0; i < jogadas; i++ ) {
        std::cout << "Numero: " << (rand() % 6 + 1) << std::endl;
    }

    std::cin.ignore();
    return 0;
}
