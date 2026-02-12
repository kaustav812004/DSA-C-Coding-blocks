#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 3;

    // Top half (including middle)
    for (int i = 1; i <= N; i++) {
        // spaces
        for (int s = 1; s <= N - i; s++) {
            cout << "  ";
        }

        // increasing numbers
        int val = i;
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val++;
        }

        // decreasing numbers
        val -= 2;
        for (int j = 1; j <= i-1; j++) {
            cout << val << " ";
            val--;
        }

        cout << endl;
    }

    // Bottom half
    for (int i = N - 1; i >= 1; i--) {
        // spaces
        for (int s = 1; s <= N - i; s++) {
            cout << "  ";
        }

        // increasing numbers
        int val = i;
        for (int j = 1; j <= i; j++) {
            cout << val++ << " ";
        }

        // decreasing numbers
        val -= 2;
        for (int j = 1; j <= i-1; j++) {
            cout << val-- << " ";
        }

        cout << endl;
    }

    return 0;
}
