//Q4 - Write a program to reverse a given integer number.

#include <iostream>
using namespace std;

int main(){
    int n, l=0, b;
    cout<<"Enter the number: ";
    cin>> n;

    while (n != 0){
        b = n%10;
        l = 10*l + b;
        n = n/10;
    }
    cout<<"The reversed number: "<<l;
    return 0;

}