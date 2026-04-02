#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    // if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    // return false;
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int good(string s){
    int n = s.size();
    int maxlen = 0, currlen = 0;
    for(int i = 0; i < n; i++){
        if(isVowel(s[i])){
            currlen++;
            maxlen = max(maxlen, currlen);
        }
        else{
            currlen = 0;
        }
    }
    return maxlen;
}

int main(){
    string s = "abdraeiofgcoiouuiznb";
    cout<<good(s);
}
