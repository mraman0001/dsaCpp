#include<iostream>
#include<vector>
using namespace std;

int recbinarySearch(vector<int> arr,int tar,int st,int end){
    if(st <= end){
        int mid = st + (end-st)/2;
        if(tar > arr[mid]){
            return recbinarySearch(arr,tar,mid+1,end);
        }
        else if(tar < arr[mid]) {
           return recbinarySearch(arr,tar,st,mid-1);
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main(){

    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int tar1 = 12;

     cout<< recbinarySearch(arr1,tar1,0,arr1.size()) << endl;

    vector<int> arr2 = {-1,0,3,4,5,9};
    int tar2 = 0;

    cout << recbinarySearch(arr2,tar2,0,arr2.size()) << endl;
    return 0;
}