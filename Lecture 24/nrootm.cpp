#include<bits/stdc++.h>
using namespace std;

//x^n
int power(int x, int n){
    long long ans = 1;
    for(int i = 1; i <= n; i++){
        ans*=x;
    }
    return ans;
}
int root(int m, int n){
    int l = 1;
    int r = m;
    while(l <= r){
        int mid = l+(r-l)/2;
        if(power(mid, n) == m){
            return mid;
        }
        else if(power(mid, n) > m){
            r = mid-1;
        }
        else l = mid+1;
    }
    return -1;
}

int main(){
    int m = 2048;
    int n = 11;
    cout<<root(m, n);
}
