//Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include <iostream>
using namespace std;

int main(){
    int a,b;
    char sign;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operation: ";
    cin>> sign;
    
    switch (sign){
        case '+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b<<endl;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Please enter valid operator"<<endl;
        break;
    }
    return 0;
}