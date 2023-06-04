//Given an integer array and its size, reverse the array and print it . Here 1<size<101

#include <iostream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5};
    int n = ((sizeof(array))/ (sizeof(array[0])));
    int reverse[n];

    for (int i = 0; i < n; i++){
        reverse[i] = array[(n-i-1)];
    }

    for (int ele:reverse){
        cout<<ele<<" ";
    }
    return 0;
}