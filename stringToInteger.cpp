#include <iostream>
using namespace std;

#include <bits/stdc++.h>
int stringToNumber(char input[])
{
    // Write your code here

    // base case
    if (input[1] == '\0')
    {
        return input[0] - 48;
    }

    // recursive call
    int ans = stringToNumber(input + 1);

    // small calculation
    int leng = strlen(input);
    int mul = 1;
    for (int i = 0; i < leng - 1; i++)
    {
        mul = mul * 10;
    }
    return ((input[0] - 48) * mul) + ans;
}

int main()
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
