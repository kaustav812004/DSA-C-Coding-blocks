#include<bits/stdc++.h>
using namespace std;

bool Palindrome(string s){
    int n = s.size();
    int l = 0, r = n-1;
    while(l <= r){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

// T.C = O(n/2)

int main(){
    // string s = "madam";
    string s = "hello";
    cout<<Palindrome(s);
}