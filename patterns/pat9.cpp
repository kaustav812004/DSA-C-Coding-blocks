#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*\t";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*\t";
        }
        cout << endl;
    }

    return 0;
}
