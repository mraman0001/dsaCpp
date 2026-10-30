#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr,int tar,int st,int end){
    int mid = st + (end - st) /2;
  if(st <= end){
    if(arr[mid] == tar){
        return mid;
    }
    else if(arr[mid] <= tar){
        return BinarySearch(arr,tar,mid+1,end);
    }
    else {
        return BinarySearch(arr,tar,st,mid-1);
    }
  }
  return -1; 
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int tar = 7;
    int n = arr.size();
    int st = 0,end = n-1;

    cout << BinarySearch(arr,tar,st,end) << endl;
    return 0;
}