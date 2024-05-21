#include <iostream>

using namespace std;

int main()
{
    int x, sum, i, tabla[100];

    i = 0;
    sum = 0;
    for (x = 1; x <= 100; x++)
    {
        if (x % 2 == 0)
        {
            tabla[i] = x;
            i++;
        }
    }

    for (x = 0; x < i; x++)
    {
        sum += tabla[x];
    }

    cout << sum << endl;

    system("PAUSE");
    return 0;
}

