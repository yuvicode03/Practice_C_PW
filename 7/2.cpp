//Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101.

#include <iostream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5,56,5,34,198,78,98,-12,18,20,-90,87};
    int n = ((sizeof(array))/(sizeof(array[0])));
    int small = array[1], big = array[0];

    for (int i = 0; i < n; i++){
        if (array[i] > big){
            big = array[i];
        }
        if (array[i] < small){
            small = array[i];
        }
    }

    cout<<big + small;
}