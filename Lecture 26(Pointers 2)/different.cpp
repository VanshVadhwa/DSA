#include<iostream>
using namespace std;

int main() {
    // int temp[10]={1,2};
    // cout << "Size of temp array: " << sizeof(temp) << endl;
    // cout << "1st element: " << temp[0] << endl;
    // cout << "1st element: " << *temp << endl;

    // int *ptr=&temp[0];
    // cout << "Address of pointer array of 1 memory block: " << sizeof(ptr) << endl;
    // cout << "Value of pointer of 1 memory block: " << sizeof(*ptr) << endl;

    //These all denotes same thing: -
    int a[20]={1,2,3,4};
    cout << "Address: " << &a[0] << endl;
    cout << "Address: " << &a << endl;
    cout << "Address: " << a << endl;

    int *p = &a[0];
    cout << "Pointer Address: " << p << endl;
    cout << "Pointer Value: " << *p << endl;
    cout << "Pointer Address: " << &p << endl; //Address of where p is situated
    
}

