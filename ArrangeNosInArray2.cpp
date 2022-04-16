#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int last = (sizeof(arr) / sizeof(int)) - 1;
    int mid;
    int k = 1;
    if (n % 2 != 0)
    {
        mid = (last / 2);
    }
    else
    {
        mid = last / 2;
    }
    for (int i = 0; i <= mid; i++)
    {
        arr[i] = k;
        k = k + 2;
    }
    k = n;
    if (n % 2 != 0)
    {
        k = n - 1;
    }
    for (int i = mid + 1; i <= last; i++)
    {
        arr[i] = k;
        k = k - 2;
    }
    for (int i = 0; i <= last; i++)
    {
        cout << arr[i] << " ";
    }
}
