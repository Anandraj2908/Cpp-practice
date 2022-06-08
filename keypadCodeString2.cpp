#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

void printKey(int num, string output)
{
    if (num == 0)
    {
        cout << output << endl;
        return;
    }

    int currentN = num % 10;
    string s;
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
    for (int i = 0; i < strL; i++)
    {
        printKey(num / 10, s[i] + output);
    }
}
void printKeypad(int num)
{
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output = "";
    printKey(num, output);
}

int main()
{
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
