#include<iostream>
#include<vector>
using namespace std;

int mergeTwoSort(vector<int>& A,int m,vector<int>& B,int n){

    int idx = m+n-1;
    int i = m-1;
    int j = n-1;
    while (i >= 0 && j >= 0){
        if(A[i] > B[j]){
            A[idx] = A[i];
            idx--;i--;
        }
        else{
            A[idx] = B[j];
            idx--;j--;
        }
    }
    while (j >= 0){
        A[idx] = B[j];
        idx--;j--;
    }
    return 0;
}
int main(){
    vector<int> A = {1,2,3,0,0,0};
    vector<int> B = {4,5,6};
    int m = 3;
    int n = 3;
    
    mergeTwoSort(A,m,B,n);

    for(int x : A) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}