#include <iostream>
using namespace std;

int main() {
    int n = 29;
    // cin >> n;

    int cnt = 0;
    if (n <= 1) {
        cout << "Not Prime";
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {   // only check till sqrt(n)
        if (n % i == 0) {
            cnt++;
            break;
        }
    }

    if (cnt == 0) cout << "Prime";
    else cout << "Not Prime";

    return 0;
}
