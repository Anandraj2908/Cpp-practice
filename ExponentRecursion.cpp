#include <iostream>
using namespace std;

int expo(int n)
{

    // base case
    if (n == 0)
    {
        return 1;
    }

    int ans = 2 * expo(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "enter the power";
    cin >> n;
    cout << expo(n);
}