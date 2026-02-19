#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // decimal number

    if (n == 0) {
        cout << 0;
        return 0;
    }

    long long binary = 0;
    long long place = 1;   // 1, 10, 100, ...

    while (n > 0) {
        int rem = n % 2;
        binary +=  rem * place;
        place = place * 10;
        n = n / 2;
    }

    cout << binary;
    return 0;
}
