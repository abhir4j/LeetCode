#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums){
    int missing = nums.size();
    for (int i=0;i<nums.size();i++){
        missing ^= i ^ nums[i];
    }
    return missing;
}
int main(){
    vector<int> nums={3,0,1};
    int result=missingNumber(nums);
    cout << result << endl;
    return 0;
}
