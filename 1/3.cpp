//Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include <iostream>
using namespace std;

int main(){
    int c,s,t;
    cout<<"Enter cost price: ";
    cin>>c;
    cout<<"Enter selling price: ";
    cin>>s;

    t = s - c;

    if (t<0){
        cout<< "Loss: "<< -1*t;
    }
    else{
        cout<< "Profit: "<< t;
    }
    return 0;
}