//Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"a: ";
    cin>>a;
    b = 0;
    a /= 10;
    b += a%10;
    a /= 1000;
    b += a;
    cout<<b;
    return 0;
}