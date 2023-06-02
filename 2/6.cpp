//Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

#include <iostream>
using namespace std;

int main(){
    int a,b,sum,difference,product,division;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    
    sum=a+b;
    difference=a-b;
    product=a*b;
    division=a/b;

    cout<<"Sum = "<<sum<<endl;
    cout<<"Difference = " <<difference << endl;
    cout<<"Product = " <<product << endl;
    cout<<"Division= " <<division<< endl;
    
    return 0;
}