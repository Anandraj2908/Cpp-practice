#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    //////////////////////////////////////
    int cN;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                cN = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = cN;
            }
        }
    }

    /////////////////////////////////////
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}