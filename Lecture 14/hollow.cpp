#include<iostream>
using namespace std;

int main(){
    int n = 5; 
    int mid = (n+1)/2;
    for(int i = mid; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<"*\t";
        }
        for(int sp = 1; sp <= 2*(mid-i)-1; sp++){
            cout<<"\t";
        }
        for(int j = 1; j <= i; j++){
                
                if(i == mid){
                    if(j != i) cout<<"*\t";
                    else cout<<"\t";
                }
                else{
                    cout<<"*\t";
                }
            }
        cout<<endl;
    }
    for(int i = 2; i <= mid; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*\t";
        }
        for(int sp = 1; sp <= 2*(mid-i)-1; sp++){
            cout<<"\t";
        }
        for(int j = 1; j <= i; j++){
                
                if(i == mid){
                    if(j != i) cout<<"*\t";
                    else cout<<"\t";
                }
                else{
                    cout<<"*\t";
                }
            }
        cout<<endl;
    }
}
