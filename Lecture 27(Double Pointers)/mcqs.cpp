#include<iostream>
using namespace std;

void increment(int **p) {
    ++(**p);
}

int main()
{
    // int i=5;
    // int j=6;
    // int *p=&i;
    // *p = 9;
    // cout << i << " " << j << endl;
    //Output: 9 6

    // int *p=0;
    // int first = 110;
    // *p = first; 
    // cout << *p << endl;
    //No output as *p is again declared

    // int *p=0;
    // int first = 110;
    // p = &first; 
    // cout << *p << endl;
    // Output: 110

    // int i=8;
    // int j=11;
    // int *p=&j;
    // i=*p;
    // *p=*p+2;
    // cout << i << " " << j << endl;;
    // Output: 11 13

    // float i=12.5;
    // float j=21.5;
    // float* ptr = &i;
    // (*ptr)++;
    // *ptr=j;
    // cout << *ptr << " " << i << " " << j << endl;
    // Output: 21.5 21.5 21.5

    // int arr[4]={1,2,3,4};
    // cout << *(arr) << " " << *(arr+1) << endl;
    // Output: 1 2

    // int arr[4]={1,2,3,4};
    // cout << arr << " " << &arr << endl;
    //Output: Same Address 

    // int arr[4]={1,2,3,4};
    // cout << (arr+1) << endl;
    // Above address is incremented by 4


    // int arr[4]={1,2,3,4};
    // int *p=arr;
    // cout << &arr[2] << " " << &p[2] << endl;
    //Both same

    // int arr[4]={1,2,3,4};
    // int *p=arr;
    // cout << p[2] << endl;
    //Giving vale at 2nd index i.e., 3 here

    // char ch = 'a';
    // char *p = &ch;
    // ch++;
    // cout << *p << endl;
    // Output: b

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;
    // Output: It prints the complete character array only

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;
    // Output: bcde

    // string s="babbar";
    // string *st=&s;
    // cout << *st << " " << st << " " << st[0] << endl;
    // Output: Whole String Address Whole String

    // int first=100;
    // int *p=&first;
    // int **q = &p;
    // int second= ++(**q);
    // // cout << **q == 101;
    // int *r = *q;
    // ++(*r); // first = 102
    // cout << first << " " << second << endl; 
    //Output: 102 101

    // int num = 5;
    // int *pt = &num;
    // int **ptr = &pt;
    // increment(ptr);
    // cout << num << endl;  
    // Output: 6 

    // int num=5;
    // int *ptr = &num;
    // cout << &ptr << " " << ptr << endl;
    // increment(&ptr);
    // cout << num << endl;
    // Output: address of pointer, address of num, value of incremented num 
}