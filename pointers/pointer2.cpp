#include <iostream>
using namespace std;

int main()
{
    // int num = 5;
    // cout << num << endl;

    // cout << "address of num is" << &num << endl;

    // int *ptr = &num;

    // cout << "Address is :" << ptr << endl;
    // cout << "value is :" << (*ptr) << endl;

    // double d = 4.3;
    // double *p2 = &d;
    // cout << "Address is :" << ptr << endl;
    // cout << "value is :" << (*ptr) << endl;

    // cout << "size of integer is" << sizeof(num) << endl;
    // cout << "size of integer is" << sizeof(ptr) << endl;
    // cout << "size of integer is" << sizeof(p2) << endl;

    // int *p=0; // pointer to int is created and pointing to some garbage address
    // cout<< *p <<endl;

    int i=5;
    int *p=0;
    p=&i;

    cout<< p <<endl;
    cout<< *p <<endl;

    return 0;
}