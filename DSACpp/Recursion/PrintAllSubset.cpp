#include<iostream>
#include<vector>
using namespace std;

void printSubset(vector<int> &arr,vector<int> &ans,int i){
    if(i == arr.size()){
        for(int val : ans){
          cout << val << " ";
        }
        cout << endl;
        return;
    }

    //Include
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1);

    ans.pop_back(); //backtrack
    //exclude
    printSubset(arr,ans,i+1);
}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> ans; //Store Subsets
    printSubset(arr,ans,0);
}