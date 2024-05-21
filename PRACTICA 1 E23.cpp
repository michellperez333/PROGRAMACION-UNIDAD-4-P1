#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sum = 0, x;
    char frase[50];

    cout << "Introduzca una frase: ";
    cin.getline(frase, 50);

    for (x = 0; x < 50; x++)
    {
        if (frase[x] != '\0')
        {
            frase[x] = frase[x] + 3;
        }
    }

    cout << "\n\nLa nueva frase es:\n\n" << frase << "\n\n";

    cout << "\n\n";

    system("PAUSE");
    return 0;
}

