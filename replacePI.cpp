#include <iostream>
using namespace std;

#include <bits/stdc++.h>
#include <string>

void replace(char input[], int start)
{

    // base case
    if (input[start] == '\0' && input[start + 1] == '\0')
    {
        return;
    }

    // recursion call
    replace(input, start + 1);

    // small calculation
    if (input[start] == 'p' && input[start + 1] == 'i')
    {
        for (int i = strlen(input); i >= start + 2; i--)
        {
            input[i + 2] = input[i];
        }
        input[start] = '3';
        input[start + 1] = '.';
        input[start + 2] = '1';
        input[start + 3] = '4';
    }
}
void replacePi(char input[])
{
    // Write your code here
    replace(input, 0);
}
int main()
{
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
