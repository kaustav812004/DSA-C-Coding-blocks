#include<iostream>
using namespace std;

int add(int a, int b){
    int c = a+b;
    return c;
}
int multiply(int a, int b){
    int prod = a*b;
    return prod;
}
double division(int x, int y){
    double z = x/y;
    return z;
}
int sub(int m, int n){
    int r = m-n;
    return r;
}
int main(){
    int a = 5;
    int b = 3;
    int x = multiply(a, b);
    cout<<x<<endl;
    cout<<add(a, b)<<endl;
    cout<<division(a, b)<<endl;
    cout<<sub(a, b)<<endl;
}