#include<iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void addressupdate(int *p) {
    p = p+1;
    // cout << "Inside Function: " << p << endl;
}

void valueupdate(int *p) {
    *p = *p+1;
    // cout << "Inside Function: " << p << endl;
}

int getSum(int arr[], int n) {         //== int getSum(int *arr, int n) 

    // cout << "Size of array: " << sizeof(arr) << endl;
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum = sum+arr[i];
    }
    return sum;
}

int main()
{
    int value=5;
    int *p = &value;

    // print(p);

    cout << "Before Updating Address: " << p << endl;
    addressupdate(p);
    cout << "After Updating Address: " << p << endl;

    cout << "Before Updating Value: " << *p << endl;
    valueupdate(p);
    cout << "After Updating Value: " << *p << endl;


    int arr[6] = {1,2,3,4,5,8};
    cout << "Sum of elements is: " << getSum(arr+3, 3) << endl;

    return 0;
}