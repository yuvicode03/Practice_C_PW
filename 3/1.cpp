//Q1 - Write a program which takes the values of length and breadth from user and check if it is a square or not.

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter legth: ";
    cin>>a;
    cout<<"Enter breadth: ";
    cin>>b;

    if (a == b){
        cout<<"It's a square.";
    }
    else{
        cout<<"It's a rectangle.";
    }

    return 0;
}