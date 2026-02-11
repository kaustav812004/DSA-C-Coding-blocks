#include <iostream>
using namespace std;

int main() {
    int n = 5;   // number of rows

    for (int i = 1; i <= n; i++) {
        // start with 1 for odd rows, 0 for even rows
        int val;
        if(i % 2 == 1) val = 1;
        else val = 0;
        for (int j = 1; j <= i; j++) {
            cout << val<<"\t";
            val = 1 - val;  // toggle between 0 and 1
        }
        cout << endl;
    }

    return 0;
}
