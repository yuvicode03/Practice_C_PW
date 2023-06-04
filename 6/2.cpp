// Given radius of a circle. Write a function to print the area and circumference of the circle.

#include <iostream>
using namespace std;

double area(double r){
    double ar=3.14*(r*r);
    return ar;
}

double circumference(double r){
    double ar=(2*3.14*r);
    return ar;
}

int main(){
    double R;
    cout<<"Enter the radius: ";
    cin>>R;

    cout<<"Circumference: "<<circumference(R)<<endl;
    cout<<"Area: "<<area(R)<<endl;
    return 0;
}