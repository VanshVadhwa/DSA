#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    char ch[6]="abcde";

    cout << "Array arr: " << arr << endl;
    cout << "Character ch: " << ch << endl;

    // char *c=ch; ->Both below and this one is working same
    char *c=&ch[0];
    cout << "Character Pointer c: " << c << endl;

    char temp = 'j';
    char *p = &temp;
    cout << p << endl; //It is going to print till it finds a null character

    // char *cha="abcde";  //HEAP MEMORY

    return 0;
}