#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "hello";
    int n = s.size();
    // cout<<n<<endl;   size

    // cout<<s[0]<<" "<<s[4]<<endl;    Accessing 

    //Traverse
    for(int i = 0; i < n; i++){
        cout<<s[i];
    }
    cout<<endl;
    cout<<s<<endl;
    
    // s[2] = 'p';
    // cout<<s<<endl;

    string t = "world";
    string c = s+t;
    cout<<c;
}
