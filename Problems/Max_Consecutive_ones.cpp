#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
  int mc=0;
  int cc=0;
  for(int num:nums){
    if(num==1){
      cc++;
      mc=max(mc,cc);
    }else{
      cc=0;
    }
    return mc;
  }
}

int main(){
  vector<int> nums={1,1,0,1,1,1};
  int result=findMaxConsecutiveOnes(nums);
  cout << result << endl;
  return 0;
}
