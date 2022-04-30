#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[])
{
    // Write your code here
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    int i = 0, j = count - 1;
    int counter = 0;
    for (int k = 0; k <= count / 2; k++)
    {
        if (str[k] != str[j--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}