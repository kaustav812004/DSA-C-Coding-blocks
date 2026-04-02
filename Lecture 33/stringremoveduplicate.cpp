#include<bits/stdc++.h>
using namespace std;
string removedup(string s){
    int n = s.size();
    string ans = "";
    ans+=s[0];
    for(int i = 1; i < n; i++){
        if(ans.back() != s[i]) ans+=s[i];
    }
    return ans;
}
int main(){
    string s = "aaaabbbbbbbbcccccccddddddeeee";
    cout<<removedup(s);
}