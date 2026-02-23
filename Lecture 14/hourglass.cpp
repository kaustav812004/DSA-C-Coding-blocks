#include<iostream>
using namespace std;

int main(){
    int n = 5;
    // cin>>n;
    for(int i = n; i >= 0; i--){
        for(int space = 1; space <= n-i; space++){
            cout<<"\t";
        }
        for(int x = i; x >= 0; x--){
            if(x == i || i == n) cout<<x<<"\t";
            // else if(i == n) cout<<x<<"\t";
            else cout<<"\t";
        }
        for(int x = 1; x <= i; x++){
            if(x == i || i == n) cout<<x<<"\t";
            // else if(i == n) cout<<x<<"\t";
            else cout<<"\t";
        }
        cout<<endl;
    }
    for(int i = 1; i <= n; i++){
        for(int space = 1; space <= n-i; space++){
            cout<<"\t";
        }
        for(int x = i; x >= 0; x--){
            if(x == i || i == n) cout<<x<<"\t";
            // else if(i == n) cout<<x<<"\t";
            else cout<<"\t";
        }
        for(int x = 1; x <= i; x++){
            if(x == i || i == n) cout<<x<<"\t";
            // else if(i == n) cout<<x<<"\t";
            else cout<<"\t";
        }
        cout<<endl;
    }
}