#include <iostream>
using namespace std;

int printFib(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return n;
    }

    // assumed case
    int fibonacci = printFib(n - 1) + printFib(n - 2);
    return fibonacci;
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << printFib(n);
}