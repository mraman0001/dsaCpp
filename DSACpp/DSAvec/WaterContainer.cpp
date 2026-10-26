//Bruteforce  apporach
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int n = height.size();
    int maxWater = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int w = j-i;
            int ht = min(height[i],height[j]);
            int area = w * ht;
            maxWater = max(maxWater,area);
        }
    }
    cout << maxWater << endl;
    return 0;
}

//optimal approach

// *lp = 0, rp = n-1, ans = 0;
// while(lp<rp){
//     w = rp-lp;
//     ht = min(ht[lp],ht[rp])
//     currwt = w*ht;
//     maxwat = max(maxwat,currwt)
//     height[lp]<height[rp] ? lp++;rp--;
// }