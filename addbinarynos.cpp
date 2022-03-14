
#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;

        x *= 2;
        n /= 10;
    }
    return ans;
}

int decimalToBinary(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)

        x *= 2;

    x /= 2;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x = x / 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int sum = binaryToDecimal(n1) + binaryToDecimal(n2);
    cout << sum << " in decimal" << endl;
    cout << decimalToBinary(sum) << " in binary" << endl;
}
