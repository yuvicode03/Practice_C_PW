//Q1 - Write a program to calculate the factorial of a number.

#include <iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"Enter the number: ";
    cin>>n;

    while (n > 0){
        fact *= n;
        n--;
    }
    cout<<fact;
    return 0;
}