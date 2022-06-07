#include <iostream>
#include <string>
using namespace std;

#include <string>
using namespace std;

int keypad(int num, string output[])
{
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    // base
    if (num == 0)
    {
        output[0] = "";
        return 1;
    }
    string s;
    int smallOutput = keypad(num / 10, output);
    int currentN = num % 10;

    if (currentN == 2)
    {
        s = "abc";
    }
    else if (currentN == 3)
    {
        s = "def";
    }
    else if (currentN == 4)
    {
        s = "ghi";
    }
    else if (currentN == 5)
    {
        s = "jkl";
    }
    else if (currentN == 6)
    {
        s = "mno";
    }
    else if (currentN == 7)
    {
        s = "pqrs";
    }
    else if (currentN == 8)
    {
        s = "tuv";
    }
    else if (currentN == 9)
    {
        s = "wxyz";
    }
    int strL = s.size();
    int j = 0;
    for (int i = smallOutput; i < smallOutput * (strL); i++)
    {
        output[i] = output[j++];
        if (j >= smallOutput)
        {
            j = 0;
        }
    }
    int c = 1;
    for (int k = 0; k < smallOutput * strL; k++)
    {
        if (k >= smallOutput * c)
        {
            c++;
        }
        output[k] = output[k] + s[c - 1];
    }

    return smallOutput * strL;
}

int main()
{
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
