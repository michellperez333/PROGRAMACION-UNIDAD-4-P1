#include <iostream>

using namespace std;

int main()
{
    int aux, numeros1[5], numeros2[5];
    int i, j;
    for (i = 0; i < 5; i++) {
        cout << "Escriba un número: ";
        cin >> numeros1[i];
    }

    for (i = 0; i < 5; i++) {
        numeros2[i] = numeros1[i] * 2;
    }
    for (i = 0; i < 5; i++) {
        cout << numeros2[i] << endl;
    }

    system("PAUSE");
    return 0;
}


