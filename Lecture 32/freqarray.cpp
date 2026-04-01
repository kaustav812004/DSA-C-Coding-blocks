#include<bits/stdc++.h>
using namespace std;

vector<int> freq(string s){
    int n = s.size();
    vector<int> freqarray(26, 0);
    for(int i = 0; i < n; i++){
        freqarray[s[i]-'a']++;
    }
    return freqarray;
}

int main(){
    string s = "aaaxxxcccccfffffz";
    vector<int> ans = freq(s);
    for(int i = 0; i < 26; i++){
        cout<<ans[i]<<" ";
    }
}