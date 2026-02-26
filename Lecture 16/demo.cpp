#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i =1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<"# ";
        }
    cout<<endl;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    printPattern(n);

}