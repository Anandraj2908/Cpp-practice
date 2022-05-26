#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[])
{
    int max1 = 0, max2 = 0, m2char = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        max1 = 0;
        for (int j = 0; input[j] != '\0'; j++)
        {
            if (input[i] == input[j])
            {
                max1++;
            }
        }
        if (max2 < max1)
        {
            max2 = max1;
            m2char = i;
        }
    }
    return input[m2char];
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}