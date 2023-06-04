//Given two numbers a and b, write a program to print all the prime numbers present between a and b .

#include <iostream>
using namespace std;

bool prime(int a){
    int count = 0;
    for (int i = 1; i <= a; i++){
        if (a%i == 0){
            count++;
        }
    }
    if (count == 2){return true;}
    else {return false;}
}

int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    for (int i = a; i <= b; i++){
        if (prime(i) == true){cout<< i<< " ";}
    }
    return 0;
}