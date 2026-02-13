#include <iostream>
using namespace std;

int main() {
    int N = 6;
    // cin >> N;

    for (int i = 0; i < N; i++) {
        int val = 1;   // first value in every row

        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);   // generate next value
        }
        cout << endl;
    }

    return 0;
}
