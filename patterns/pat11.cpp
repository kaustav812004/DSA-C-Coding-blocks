#include <iostream>
using namespace std;

int main() {
    int n = 5;   // height of solid rhombus

    for (int i = 1; i <= n; i++) {
        // print spaces
        for(int space = 1; space <= n-i; space++){
            cout<<"\t";
        }
        for(int j = 1; j <= n; j++){
            cout<<"*\t";
        }

        cout << endl;
    }

    return 0;
}
