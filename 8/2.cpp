//Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
//a pair in the array whose sum is exactly x.

#include <iostream>
using namespace std;

int main(){
    int n;
    bool flag = false;
    cout<<"Enter the size of array: ";
    cin>> n;

    int array[n];

    for (int i = 0; i < n; i++){
        cout<<"Enter the array element: ";
        cin>> array[i];
    }

    int x;
    cout<<"Enter the required integer x: ";
    cin>> x;

    for(int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if(array[i] + array[j] == x){
                flag = true;
                break;
            }
        }
    }
    if (flag == true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}