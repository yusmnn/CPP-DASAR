#include <iostream>
using namespace std;
int main()
{
    int n, jumlah = 0;
    cout << " Masukkan Nilai : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n, k = 1; k <= i; k++, j--)
        {
            jumlah += j;
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "jumlah = " << jumlah << endl;

    return 0;
}
/* output :
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
jumlah = 55
*/