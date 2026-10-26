#include<iostream>
#include <vector>
using namespace std;

vector<int> PairSum( vector<int> vec , int target ){
    vector<int> ans;
    int n = vec.size();
    int i = 0 , j = n-1;

    while (i<j){
      int pairsum = vec[i] + vec[j];

      if(pairsum > target){
        j--;
      }
      else if (pairsum < target){
        i++;
      }
      else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
    return ans;
}
int main(){

    vector<int> vec = {2,7,11,15};
    int target = 17;
    vector<int> ans =  PairSum(vec , target);

    cout << ans[0] << "," << ans[1] << endl;

    return 0;

}