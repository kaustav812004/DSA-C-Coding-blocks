#include <iostream>
using namespace std;

int main() {
    int n = 5;   // half height of diamond

    // Upper pyramid
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int space = 1; space <= n - i; space++) {
            cout << "\t";
        }
        // stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*\t";
        }
        cout << endl;
    }

    // Lower inverted pyramid
    for (int i = n; i >= 1; i--) {
        // spaces
        for (int space = 1; space <= n - i; space++) {
            cout << "\t";
        }
        // stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*\t";
        }
        cout << endl;
    }

    return 0;
}
