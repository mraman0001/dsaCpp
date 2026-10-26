#include<iostream>
#include<vector>
using  namespace std;

int main(){

    vector<int> vec = {2,1,1,2,2};
    int freq =  1, ans = vec[0];
    int n = vec.size();
    // sort(vec.begin(),vec.end());

    for(int i = 1; i < n; i++){
        if(vec[i] == vec[i-1]){
            freq++;
        }
        else {
            freq = 1;
            ans = vec[i];
        }
        if(freq > n/2){
            return ans;
        }
    }

    cout << ans << endl;

    return 0;
}