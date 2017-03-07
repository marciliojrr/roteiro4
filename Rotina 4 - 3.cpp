#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    float vezes, x = 1;

    //srand(time(NULL));
    //x = rand()%6+1;

    cout << "Vamos ver qual a probabilidade de cada face do dado aparecer!\n";
    cout << "-------------------------------------------------------------\n\n";
    do {
        cout << "Digite a quantidade de vezes que o dado sera jogado: ";
        cin >> vezes;
        x = (vezes*1/6)*100;
    cout << "A probabilidade de cada face aparecer e de: " << x <<"%" << endl;
    } while (vezes > 0);

}
