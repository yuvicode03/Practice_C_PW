//Q2 - Write a program to print all Armstrong numbers between 100 to 500.

#include <iostream>
using namespace std;

int main(){
    int a,sum;
    for (int i = 100;i<=500;i++){
        a = i;
        sum = 0;
        while (a != 0){
            sum = sum + ((a%10) * (a%10) * (a%10));
            a = a/10;
        }
        if (sum == i){
            cout<<i<<", ";
        }
    }
    return 0;
}