#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *p=&i;

    cout << "Value of i: " << i << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Value of i through pointer: " << *p << endl;
    cout << "Address of i through pointer: " << p << endl;
    cout << "Address of pointer variable p: " << &p << endl;
}