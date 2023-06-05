//Given a vector arr[] sorted in increasing order. Return an array of squares of each
//number sorted in increasing order. Where size of vector 1<size<101.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;

    int array[n];

    for (int i = 0; i < n; i++){
        cout<<"Enter the array element: ";
        cin>> array[i];
    }

    for (int i = 0; i < n; i++){
        array[i] = array[i] * array[i];
    }

    for (int i = 0; i < n ; i++){
        for (int j = i; j < n - 1; j++){
            int c = array[j+1];
            if (array[i] > array[j + 1] ){
                array[j + 1] = array[i];
                array[i] = c;
            }
        }
    }

    for (int ele: array){
        cout<<ele<<" ";
    }

    return 0;
}