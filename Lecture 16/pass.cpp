#include<iostream>
using namespace std;
 
//pass by value
// void func(int a){
//     a = a+10;
// }


//pass by reference
void func(int& a){
    a = a+10;
}

int main(){
    int a = 5;
    func(a);
    cout<<a<<endl;

    int b;
    cout<<&b;
}
