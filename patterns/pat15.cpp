#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 4;

    int a = 0;
    int b = 1;  // first two Fibonacci numbers

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a << "\t";
            int c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }

    return 0;
}
