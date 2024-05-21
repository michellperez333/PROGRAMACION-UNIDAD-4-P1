#include <iostream>

using namespace std;

int main()
{
    int x, i, tabla[100];

    i = 0;
    for (x = 1; x <= 100; x++)
    {
        if (x % 2 == 1)
        {
            tabla[i] = x;
            i++;
        }
    }

    for (x = 0; x < i; x++)
    {
        cout << tabla[x] <<endl;
    }

    system("PAUSE");
    return 0;
}
