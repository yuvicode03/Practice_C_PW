//Q5 - Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the number: ";
    cin>> a;
    b = 0;
    b += a%10;
    a /= 10;
    b += a%10;
    a /= 10;
    b += a;
    cout<<b;
    return 0;
}