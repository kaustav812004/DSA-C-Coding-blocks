#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 300 && n <= 460) {
        cout << "You won a MacBook!" << endl;

        if (n >= 300 && n <= 380) {
            cout << "Model: M1 Mac";
        } 
        else {
            cout << "Model: M2 Mac";
        }
    }

    else if (n >= 200 && n <= 280) {
        cout << "You won a pack of Kurkure!" << endl;

        if (n >= 200 && n <= 240) {
            cout << "Flavor: Chilli Kurkure";
        } 
        else {
            cout << "Flavor: Onion Kurkure";
        }
    }

    else if (n >= 1100 && n <= 1500) {
        cout << "You won a Cycle!" << endl;

        if (n >= 1100 && n <= 1300) {
            cout << "Brand: Avon Cycle";
        } 
        else {
            cout << "Brand: Hero Cycle";
        }
    }

    else if (n > 50 && n <= 80) {
        cout << "You won a Bike!" << endl;

        if (n > 50 && n <= 65) {
            cout << "Model: Bullet";
        } 
        else {
            cout << "Model: Rajdoot";
        }
    }

    else {
        cout << "Better luck next time.";
    }

    return 0;
}
