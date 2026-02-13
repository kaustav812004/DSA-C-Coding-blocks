#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 5;
    // cin >> N;

    for (int i = 1; i <= N; i++) {
        // left stars
        for (int j = 1; j <= i; j++) {
            cout << "*\t";
        }

        // middle gap
        int gap = 2 * (N - i) ;
        for (int s = 1; s <= gap; s++) {
            cout << "\t";
        }

        // right stars
        for (int j = 1; j <= i; j++) {
            cout << "*\t";
        }

        cout << endl;
    }

    return 0;
}
