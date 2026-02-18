#include <iostream>
using namespace std;

int main() {
    int n = 29;
    // cin >> n;

    int cnt = 0;

    if (n <= 1) {
        cout << "Not Prime";
    } else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cnt++;
            }
        }
    }

    if (cnt == 2) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}
