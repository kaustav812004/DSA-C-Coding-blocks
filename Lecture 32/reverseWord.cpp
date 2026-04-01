#include<bits/stdc++.h>
using namespace std;

string rev(string s){
    int n = s.size();
    string ans = "";
    reverse(s.begin(), s.end());
    for(int i = 0; i < n; i++){
        while(i < n && s[i] == ' '){
            i++;
        }
        if(i >= n) break;
        string word = "";
        while(i < n && s[i] != ' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        ans+=word+" ";
     }
     if(ans.empty()) return ans;
     return ans.substr(0, ans.size()-1);
}

int main(){
    // string s = "the sky is blue";
    string s = "         hello         world       ";
    cout<<rev(s);
}