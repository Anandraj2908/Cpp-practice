#include <iostream>
using namespace std;

void stringS(string input, string output)
{
    // base case
    if (input.empty())
    {
        cout << output << endl;
        return;
    }

    stringS(input.substr(1), output);
    stringS(input.substr(1), output + input[0]);
}

int main()
{
    string input;
    cin >> input;
    string output = "";
    stringS(input, output);
}