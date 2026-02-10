#include <iostream>
using namespace std;

int main() {
    int n = 5;   // height of inverted pyramid

    for (int i = n; i >= 1; i--) {
        // print leading spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }

        // print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
