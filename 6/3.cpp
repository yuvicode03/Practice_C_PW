//Given the age of a person, write a function to check if the person is eligible to vote or not.

#include <iostream>
using namespace std;

bool vote(int age){
    if (age >= 18){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int age;
    cout<<"Enter the age: ";
    cin>> age;

    if (vote(age) == true){
        cout<< "Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}