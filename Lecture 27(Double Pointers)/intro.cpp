#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *p=&i;
    int **dp=&p;

    cout << "Value of i: " << i << endl;
    cout << "Address of i: " << &i << endl;

    cout << "Value of i through pointer: " << *p << endl;

    //Giving Same Output: -
    cout << "Address of i directly: " << &i << endl;
    cout << "Address of i through pointer: " << p << endl;
    cout << "Address stored inside p of variable i: " << *dp << endl;

    //Giving Same Output: -
    cout << "Address of pointer variable p: " << &p << endl;
    cout << "Address of p through double pointer: " << dp << endl;

    cout << "Value of i through double pointer: " << **dp << endl;
    cout << "Value of p through double pointer: " << **dp << endl;

    cout << "Address of p through double pointer: " << dp << endl;
    cout << "Address of p through double pointer: " << **dp << endl;

    cout << "Address stored inside p of variable i: " << *dp << endl;

    // These three are giving same outputs
    // cout << i << endl;
    // cout << *p << endl;
    // cout << **dp << endl;

    // These three are giving same output of addresses: -
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *dp << endl;


    // cout << "Address of double pointer variable dp: " << &dp << endl;
}