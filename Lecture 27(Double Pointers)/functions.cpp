#include<iostream>
using namespace std;

void update(int **p2) {
    // p2 = p2+1; == No Farak
    // *p2 = *p2+1; == No Farak
    **p2 = **p2 + 1; //Incremented by 1 in After in main function
}

void updateAdd(int **p2) {
    // p2 = p2+1; No change 
    // *p2 = *p2+1; //It incremented the value(address of i) inside p by 4
    **p2 = **p2 + 1; //Value change of i,*p,**p2
}

int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    //Checking Value changes by p = p+1 in update function = No Farak
    //Checking Value changes by *p = *p+1 in update function = No Farak
    //Checking Value changes by **p = **p+1 in update function = Before: 5, After: 6
    // cout << "Before: " << i << endl;
    // cout << "Before: " << *p << endl;
    // cout << "Before: " << **p2 << endl;

    // update(p2);
    // cout << "After: " << i << endl;
    // cout << "After: " << *p << endl;
    // cout << "After: " << **p2 << endl;

    //Checking Address changes by p = p+1 in update function = No Farak
    //Checking Address changes by *p = *p+1 in update function = Farak in p 
    //Checking Address changes by **p = **p+1 in update function = Only change in value of i,*p,**p2, 
    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;

    updateAdd(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl; //*p=*p+1 -> Address is incremented by 4, as value inside p is changed
    cout << "After: " << p2 << endl; //**p = **p+1 -> Only change in value of i,*p,**p2, 


}