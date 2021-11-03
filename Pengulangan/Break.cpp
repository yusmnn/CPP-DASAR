#include <iostream>
using namespace std;

int main()
{

    // break artinya berhenti (keluar program)

    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            break;
        }
        cout << i << endl;
    }

    cin.get();
    return 0;
}
