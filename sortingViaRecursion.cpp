#include <iostream>
using namespace std;

bool checkSorted(int arr[], int ind, int n)
{
    if (ind >= n)
    {
        return true;
    }

    if (arr[ind] < arr[ind - 1])
    {
        return false;
    }

    return checkSorted(arr, ind + 1, n);
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool check = checkSorted(arr, 1, n);
    if (check == true)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted" << endl;
    }
}