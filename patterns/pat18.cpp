#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 8;
    // cin >> N;

    // Top half (including middle)
    for (int i = N; i >= 0; i--) {
        for (int s = 0; s < N-i; s++) {
            cout << "\t";  
        }

        for (int x = i; x >= 0; x--) {
            cout << x << "\t";
        }
        for (int x = 1; x <= i; x++) {
            cout << x << "\t";
        }
        cout << endl;
    }

    // Bottom half
    for (int i = 1; i <= N; i++) {
        for (int s = 0; s < N-i; s++) {
            cout << " \t";
        }

        for (int x = i; x >= 0; x--) {
            cout << x << "\t";
        }
        for (int x = 1; x <= i; x++) {
            cout << x << "\t";
        }
        cout << endl;
    }

    return 0;
}
