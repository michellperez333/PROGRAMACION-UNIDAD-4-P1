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
        if (frase[x] >= 65 && frase[x] <= 90)
        {
            sum++;
        }
    }

    cout << "\n\nEn la frase hay " << sum << " mayúsculas\n\n";

    cout << "\n\n";

    system("PAUSE");
    return 0;
}

