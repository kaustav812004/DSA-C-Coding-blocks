#include <iostream>
using namespace std;

int main() {
    int n = 29;
    // cin >> n;

    int cnt = 0;

    if (n <= 1) {
        cout<<"Not Prime";
    } else {
        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                cnt++;
                break;   // stop checking further
            }
        }
    }

    if (cnt == 0) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}
