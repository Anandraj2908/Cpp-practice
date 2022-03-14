#include <iostream>
using namespace std;

int main()
{
    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;

    a[0] = 5;
    a[1] = 10;
    cout << *a << endl;
    cout << *(a + 1) << endl;
    int *p = &a[0];

    cout << a << endl;
    cout << p << endl;

    //diff 1
    cout << &p << endl;
    cout << &a << endl;

    //diff 2
    cout << sizeof(p) << endl;
    cout << sizeof(a) << endl;

    //diff 3
    p = p + 1;
    //a=a+1; & a++ ,cannot be reassigned *error
}
//array can not be reassigned