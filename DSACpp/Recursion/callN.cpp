#include<iostream>
using namespace std;

void printN(int n){
    if(n == 1){
        cout << "1" <<endl;
        return;
    }
    cout << n << endl;
    printN(n-1);
}
int main(){
    int n;
    cout<< "Enter the value of n : ";
    cin >> n ;
    printN(n);
    return 0;
}