#include<iostream>
using namespace std;

void changeA(int * ptr){ //pass by reference
    *ptr = 30;
}
int main(){
    int a = 10;
    changeA(&a);

    cout << a << endl;
}