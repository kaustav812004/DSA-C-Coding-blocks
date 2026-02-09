#include <iostream>
using namespace std;

int main() {
    int n = 5;   // number of rows
    int i = 1;

    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << j<<" ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
