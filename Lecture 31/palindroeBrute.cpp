#include<bits/stdc++.h>
using namespace std;

bool Palindrome(string s){
    string t = s;
    reverse(t.begin(), t.end());
    if(s == t) return true;
    return false;
}

// T.C = O(n)

int main(){
    string s = "madam";
    cout<<Palindrome(s);
}