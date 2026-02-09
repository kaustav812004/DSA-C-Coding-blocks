#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Before Swapping a: "<<a<<" b: "<<b<<endl;
    // int temp = a;
    // a = b;
    // b = temp;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After Swapping a: "<<a<<" b: "<<b;
}