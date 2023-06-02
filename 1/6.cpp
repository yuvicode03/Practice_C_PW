//Q6 - Write a C++ program to swap two numbers with the help of a third variable.

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    c = a;
    a = b;
    b = c;
    cout<<"a: "<<a<<endl<<"b: "<<b;
    return 0;
}