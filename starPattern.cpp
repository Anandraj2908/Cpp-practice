#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = (n / 2) + 1;
    int b;
    for (int i = 1; i <= n; i++)
    {
        if (i <= t)
        {
            for (int k = 1; k < t + 1 - i; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            for (int l = 2; l <= i; l++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int m = 1; m <= (i - t); m++)
            {
                cout << " ";
            }
            b = n - i;
            for (int o = 1; o <= b + 1; o++)
            {
                cout << "*";
            }
            for (int p = 1; p <= b; p++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}
