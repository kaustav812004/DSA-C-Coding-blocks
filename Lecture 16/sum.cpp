#include<iostream>
using namespace std;

int sumofdig(int n){
    int sum = 0;
    while(n > 0){
        int dig = n % 10;
        sum+=dig;
        n/=10;
    }
    return sum;
}

int main(){
    int n = 123;
    cout<<sumofdig(n);
}