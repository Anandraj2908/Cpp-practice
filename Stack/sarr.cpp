#include <iostream>
using namespace std;
#include "StackUsingArray.cpp"
int main()
{
    StackUsingArray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.pop() << endl;
    s.push(50);
    s.push(60);
    cout << s.top() << endl;
}