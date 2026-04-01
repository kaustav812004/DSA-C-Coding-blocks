bool anagram(string s, string t){
    int n = s.size();
    int m = t.size();
    if(n != m) return false;
    vector<int> freq(26);
    for(int i = 0; i < n; i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0) return false;
    }
    return true;
}