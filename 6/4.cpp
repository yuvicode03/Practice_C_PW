//Given two numbers a and b, write a program using functions to print all the odd numbers between them.

#include <iostream>
using namespace std;

bool odd(int n){
    if (n%2 != 0){
        return true;
    }
}

int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    for (int i = a; i <= b; i++){
        if (odd(i) == true){
            cout<<i;
        }
        else{cout<<" ";}
    }
    return 0;
}