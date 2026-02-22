#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    int gcd = 1;
    int limit;
    if(a < b) limit = a;
    else limit = b;
    for(int i = 1; i<=limit; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    cout<<"GCD = "<<gcd<<endl;
    int prod = a*b;
    int lcm = prod/gcd;
    cout<<"LCM = "<<lcm<<endl;
    return 0;
}
