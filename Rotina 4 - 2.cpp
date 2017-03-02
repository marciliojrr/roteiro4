#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main () {
    int num, x, tent = 1;
    char s = 't';

    srand(time(NULL));
    x = rand() % 100 +1;

    cout << "Estou pensando em um numero, consegue adivinhar?\n\n";
    cout << "Voce tem DEZ tentativas. Boa Sorte!\n\n";

    do {
    cout << "Digite um numero: ";
    cin >> num;
        if (num > x) {
        cout << "O numero que estou pensando e menor! \n";
        }
        else {
            if (num < x)
            cout << "O numero que estou pensando e maior! \n";
            else {
                cout << "Você acertou!!\n";
                cout << "Numero de tentativas: " << tent <<endl;
                cout << "O numero era: " << x << endl;
            }
        }
    tent++;
    }
    while (num != x && tent<=10);
    if (tent > 10) {
        cout << "Voce ultrapassou o limite de tentativas.\n\n";
        cout << "O numero era: \n" << x << endl;
    }
    while (s != 's' && s != 'n') {
        cout << "Deseja tentar novamente? [s/n]: ";
        cin >> s;

        if (s == 's')
            main();
    }
    return 0;
}
