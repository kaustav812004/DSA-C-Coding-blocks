#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // e.g., 60

    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            cout << i << " ";
            n = n / i;   // reduce n
        } else {
            i++;        // try next number
        }
    }

    return 0;
}
