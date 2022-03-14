#include <iostream>
#include <math.h>
using namespace std;

bool check(int n1, int n2, int n3)
{
    if (pow(n1, 2) == pow(n2, 2) + pow(n3, 2) || pow(n2, 2) == pow(n1, 2) + pow(n3, 2) || pow(n3, 2) == pow(n2, 2) + pow(n1, 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (check(n1, n2, n3) == true)
    {
        cout << "Yes its Pythogorian triplet";
    }
    else
    {
        cout << "Not an pythogorian triplet";
    }
}