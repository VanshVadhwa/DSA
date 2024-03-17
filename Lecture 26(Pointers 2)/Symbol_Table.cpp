#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,3,2,4,5,6,7,8,9,10};

    //Giving Error
    // arr = arr+1;

    int *ptr=arr;
    cout << arr << endl;
    cout << *arr << endl;
    
    *ptr = *ptr+1;
    cout << arr << endl;
    cout << *arr << endl;

    *ptr = *ptr+1;
    cout << ptr << endl;
    cout << *ptr << endl;

    //Address Changed here by +4
    ptr=ptr+1;
    cout << ptr << endl;
    cout << *ptr << endl;

    cout << "Value at index 1: " << *(arr+1) << endl;
}