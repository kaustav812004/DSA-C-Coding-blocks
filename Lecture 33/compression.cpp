#include<bits/stdc++.h>
using namespace std;
string compression(string s){
    int n = s.size();
    string res = "";
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]) cnt++;
        else{
            res+=s[i-1];
            res+=to_string(cnt);
            cnt = 1;
        }
    }
    res+=s[n-1];
    res+=to_string(cnt);
    return res;
}
int main(){
    string s = "aaaabbbbbbbbcccccccddddddeeee";
    cout<<compression(s);
}