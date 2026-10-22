#include <bits/stdc++.h>
using namespace std;

//Using Hash Map
vector<int> twoSum(vector<int>& nums, int target){
  unordered_map<int,int> mp;
  for(int i=0;i<nums.size();++i){
    int need = target - nums[i];
    if(mp.count(need)){
      return {mp[need],i};
    }
    mp[nums[i]]=i;
  }
  return {};
}
//Using Brute Force
vector<int> twoSum(vector<int>& nums, int target){
  for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
      if(nums[i]+nums[j]==target){
        return {i,j};
      }
    }
  }
  return {};
}

int main(){
  vector<int> nums={2,7,11,17};
  int target=9;
  vector<int> result=twoSum(nums, target);
  for(int x:result){
    cout << x << ",";
  }
}
