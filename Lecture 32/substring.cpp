#include<bits/stdc++.h>
using namespace std;

vector<string> substrings(string s){
    int n = s.size();
    vector<string> ans;
    for(int i = 0; i < n; i++){
        for(int j = i; j< n; j++){
            ans.push_back(s.substr(i, j-i+1));
        }
    }
    return ans;
}

int main(){
    string s = "xayz";
    vector<string> ans = substrings(s);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
