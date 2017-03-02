#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int n, x, y;
    y = 0;

    cout    << "Diz qual dos 10 numeros e maior";

    for(x = 1; x <= 10; x++) {
      cout << "\nDigite: ";
      cin >> n;

      if  (y < n)  {
      y = n ;
            }
    }

   cout << "Maior numero digitado\n";
   cout << y << endl;
   cin.get();cin.get();

}
