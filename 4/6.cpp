//Q6- Write a program to print alphabet diamond pattern:
/*
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
*/

#include <iostream>
using namespace std;

int main(){
    int alpha = 65, num = 0;
    //upper triangle
    for (int i = 1; i <= 5; i++){
        //printing spaces
        for (int j = 5; j > i; j--){
            cout<<" ";
        }
        //printing aplhabets
        for (int k = 0; k < i*2-1; k++){
            cout<<((char)(alpha+num++));
        }
        num = 0;
        cout<<endl;
    }
    //lower triangle
    for (int i = 1; i <= 4; i++){
        //printing spaces
        for (int j = 1; j < i; j++){
            cout<<" ";
        }
        //printing alphabets
        for (int k = (5-i)*2 - 1; k > 0; k--){
            cout<<((char)(alpha+num++));
        }
        num = 0;
        cout<<endl;
    }

    return 0;
}