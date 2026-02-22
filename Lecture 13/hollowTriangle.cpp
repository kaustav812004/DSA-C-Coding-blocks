#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1; i <= n; i++){
        for(int space = 1; space <= n-i; space++){
            cout<<"\t";
        }
        for(int star = 1; star <= 2*i-1; star++){
            if(i == 1 || i == n || star == 1 || star == 2*i-1){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}
