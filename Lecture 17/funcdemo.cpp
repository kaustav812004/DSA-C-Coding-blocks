// #include<iostream>
// using namespace std;

// // void pattern(int n){
// //     for(int i = 1; i <= n; i++){
// //         for(int sp = 1; sp <= n-i; sp++){
// //             cout<<" ";
// //         }
// //         for(int j = 1; j <= i; j++){
// //             cout<<"*";
// //         }
// //         cout<<endl;
// //     }
// // }

// void pattern(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int n = 4;
//     pattern(n);


//     cout<<endl;
//     int m = 5;
//     pattern(m);
// }


#include<iostream>
using namespace std;

int reverse(int n){
    int rev = 0;
    while(n > 0){
        int dig = n % 10;
        rev = rev*10+dig;
        n/=10;
    }
    return rev;
}

int main(){
    int n = 123;
    cout<<reverse(n);
}
