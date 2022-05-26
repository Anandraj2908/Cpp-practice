#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void printSpell(int n, string str[])
{
    if (n == 0)
    {
        return;
    }
    printSpell(n / 10, str);
    cout << str[n % 10] << " ";
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Answer is : ";
    printSpell(n, str);
    return 0;
}