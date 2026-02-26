class Solution {
public:
    int add(int n){
        int sum = 0;
        while(n > 0){
            int dig = n % 10;
            sum+=dig;
            n/=10;
        }
        return sum;
    }
    int addDigits(int n) {
        while(n >= 10){
            int sum = add(n);
            n = sum;
        }
        return n;
    }
};
