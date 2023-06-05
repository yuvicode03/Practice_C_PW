//Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
//two arrays into a single sorted array of size m+n.

#include <iostream>
using namespace std;

int main(){
    int array1[] = {1,2,3};
    int array2[] = {4,5,6};

    int size1 = ((sizeof(array1)) / (sizeof (array1[0])));
    int size2 = ((sizeof(array2)) / (sizeof (array2[0])));
    int n = size1 + size2;
    int array3[n];
    for (int i = 0; i <= size1; i++){
        array3[i] = array1[i];
    }
    for (int i = 0; i <= size2; i++){
        array3[size1 + i ] = array2[i];
    }
    for(int ele:array3){
        cout<<ele<<" ";
    }
    return 0;
}