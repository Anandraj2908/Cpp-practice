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
    for (int j = 0; j < 9; j++)
    {
        for (int i = j + 1; i < 10; i++)
        {
            if (arr[j] > arr[i])
            {
                cN = arr[j];
                arr[j] = arr[i];
                arr[i] = cN;
            }
        }
    }

    /////////////////////////////////////
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}