#include<bits/stdc++.h>
using namespace std;
int stoicustom(string s){
    int n = s.size();
    int num = 0;
    for(int i = 0; i < n; i++){
        num = num*10+(s[i]-'0');
    }
    return num;
}
int main(){
    string s = "abc";
    cout<<stoicustom(s);
}