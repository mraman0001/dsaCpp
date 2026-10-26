#include<iostream>
using namespace std;

void printarr(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int arr[] , int n){
    for(int i = 0; i < n-1; i++){
        int smallIndx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallIndx]){
                smallIndx = j;
            }
        }
        swap(arr[i],arr[smallIndx]);
    }
}
int main(){
    int n = 5;
    int arr[] = {4,2,5,1,3};
    SelectionSort(arr,n);
    printarr(arr,n);
    return 0;
}