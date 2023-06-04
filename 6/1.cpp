//Write a function to print squares of the first 5 natural numbers.

#include <iostream>
#include <cmath>
using namespace std;

int square(int num){
    int a;
    a = num * num;
    return a;
}

int main(){
    for (int i = 1; i <= 5; i++){
        cout<< square(i)<< " ";
    }
    return 0;
}