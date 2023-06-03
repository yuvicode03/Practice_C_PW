//Q3 - Write a program to find the sum of n natural numbers.

#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout<<"Enter the number: ";
    cin>>n;

    while (n != 0){
        sum += n;
        n--;
    }
    cout<<sum;
    return 0;
}