//Q2 - Write a program to print absolute value of a number entered by the user.

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if (a>=0){
        cout<<a;
    }
    else{
        cout<< -1*a;
    }

    return 0;
}