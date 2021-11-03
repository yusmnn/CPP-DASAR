
#include <iostream>
using namespace std;
int main()
{
    int n, j = 1, jumlah = 0;
    cout << "masukkan angka : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
    }
    return 0;
}
/* output :
masukkan angka : 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/