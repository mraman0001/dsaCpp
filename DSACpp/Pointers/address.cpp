#include<iostream>
#include<vector>
using namespace std;

int main(){
    float price = 200.25;
    float* ptr = &price;

    cout << ptr << endl;
    cout << &price << endl;
    cout << *(&price) << endl;
        return 0;
}