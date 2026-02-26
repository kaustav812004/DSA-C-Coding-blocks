#include<iostream>
using namespace std;

void func(int x, int y){
    cout<<"First is: "<<x<<endl;
    cout<<"Second is: "<<y;
}
void greet(){
    cout<<"Hello"<<endl;
}
int main(){
    greet();
    int x = 2, y = 5;
    func(x, y);

    cout<<endl;

    int a = 6, b = 2;
    func(a, b);
}