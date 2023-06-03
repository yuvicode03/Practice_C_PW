//Q10- Write a C++ program to print a rectangle out of *

#include <iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter the number of starrows: ";
    cin>>l;
    cout<<"Enter the number of starcolumns: ";
    cin>>b;

    for (int i = 1; i <= l; i++){
        for (int j = 1; j <= b; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}