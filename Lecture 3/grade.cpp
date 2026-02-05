#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if(marks >= 90)
        cout << "Grade A";
    else if(marks >= 75)
        cout << "Grade B";
    else if(marks >= 50)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}
