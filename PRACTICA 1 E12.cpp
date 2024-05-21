#include <iostream>

using namespace std;

int main()
{
    float sum, numeros1[10];
    int i;
    sum = 0;
    for (i = 0; i < 10; i++) {
        cout << "Escriba un número: ";
        cin >> numeros1[i];
    }

    for (i = 0; i < 10; i++) {
        sum += numeros1[i];
    }
    cout << sum / 10 << endl;

    system("PAUSE");
    return 0;
}

