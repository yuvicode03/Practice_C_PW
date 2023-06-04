//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include <iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int odd = 0,n = 5;

    for (int i = 0; i < n; i++){
        if (array[i] % 2 != 0){
            odd ++;
        }
    }

    int even = n - odd;

    cout<<"Count of odd: "<<odd<<endl;
    cout<<"Count of even: "<<even<<endl;

    return 0;
}