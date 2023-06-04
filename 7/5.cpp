//Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
//both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

#include <iostream>
using namespace std;

int maxi(int a[], int size){
    int max = a[0];
    for (int i = 0; i < size; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int array[] = {8,6,4,2,1,0,3,5};
    int size = ((sizeof(array)) / sizeof (array[0]));
    int n = maxi(array, size);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i <= n; i++){
        sum1 += i;
    }
    for (int i = 0; i < size; i++){
        sum2 += array[i];
    }
    int num = sum1 - sum2;
    cout<<num;
    return 0;
}