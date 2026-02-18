#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        cout<<"GCD = "<<b;
    }
    // If a is not 0,
    // return a as the GCD
    else{
        cout<<"GCD = "<<a;
    }
}
