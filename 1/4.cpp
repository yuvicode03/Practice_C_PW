//Q4- Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if (a<0){
        cout<<"The number is negative and skipped.";
    }
    else{
        cout<<a;
    }
    return 0;
}