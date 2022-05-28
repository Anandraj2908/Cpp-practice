#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char *input)
{
    // base case
    if (input[0] == '\0')
    {
        return;
    }

    // recursive call
    removeConsecutiveDuplicates(input + 1);

    // small calculation
    if (input[0] == input[1])
    {
        int i = 1;
        while (input[i] != '\0')
        {
            input[i] = input[i + 1];
            i++;
        }
    }
}

int main()
{
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}