#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c)
{
    // Write your code here
    int n = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != c)
        {
            input[n] = input[i];
            n++;
        }
    }
    input[n] = '\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}