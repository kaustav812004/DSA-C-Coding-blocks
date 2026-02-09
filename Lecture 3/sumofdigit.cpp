#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // cout<<n*(n+1)/2<<endl;
    // return 0;
    int sum = 0;
    // for(int i = 1; i <= n; i++){
    //     sum += i;
    // }
    int i = 1;
    while(i <= n){
        sum+=i;
        i++;
    }

    cout << sum;
    return 0;
}
