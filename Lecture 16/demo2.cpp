#include<iostream>
using namespace std;

void print1ton(int n){
    for(int i = 1; i <= n; i++){
        cout<<i<<endl;
    }
}

int main(){
    int n = 12;
    print1ton(n);
    return 0;
}