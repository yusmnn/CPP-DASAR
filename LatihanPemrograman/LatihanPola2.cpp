#include <iostream>
using namespace std;

int main()
{

    cout << "========== PROGRAM DIMULAI ==========\n";

    int n;
    cout << "Masukkan panjang pola segi tiga : ";
    cin >> n;
    cout << endl;

    cout << "Pola pertama :\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola kedua :\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola ketiga :\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
            cout << "*";
        cout << endl;
    }

    cout << "Pola keempat :\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= i; k--)
            cout << "*";
        cout << endl;
    }

    cout << "Pola kelima :\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < (i * 2); k++)
            cout << "*";
        cout << endl;
    }

    cout << "Pola keenam :\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--)
            cout << "*";
        cout << endl;
    }
    cout << "Pola ketujuh :\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
            cout << "*";
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--)
            cout << "*";
        cout << endl;
    }

    cout << "Pola ke delapan :\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--)
            cout << "*";
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
