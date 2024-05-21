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
        switch (frase[x])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            sum++;
            break;
        default:
            break;
        }
    }

    cout << "\n\nEn la frase hay " << sum << " vocales\n\n";

    cout << "\n\n";

    system("PAUSE");
    return 0;
}

