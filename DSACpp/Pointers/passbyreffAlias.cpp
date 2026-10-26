#include<iostream>
using namespace std;

void changeA(int &b){ //pass by reference uisng alias
    b = 30;
}
int main(){
    int a = 10;
    changeA(a);

    cout << a << endl;
}