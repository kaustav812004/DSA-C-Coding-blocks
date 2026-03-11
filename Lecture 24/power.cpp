//x^n
int power(int x, int n){
    long long ans = 1;
    for(int i = 1; i <= n; i++){
        ans*=x;
    }
    return ans;
}