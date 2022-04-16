#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    /////////////////////////
    int mid = (n - 1) / 2;
    int k = 1;
    for (int i = 0; i <= mid; i++)
    {
        arr[i] = k;
        k = k + 2;
    }
    k = 2;
    for (int i = n - 1; i > mid; i--)
    {
        arr[i] = k;
        k = k + 2;
    }

    ////////////////////////////////
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}