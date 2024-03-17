#include<iostream>
using namespace std;

int main()
{
    bool ye = 1;
    bool *b=&ye;
    cout << ye << endl;
    cout << &ye << endl;
    cout << sizeof(ye) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(&ye)  << endl;
}