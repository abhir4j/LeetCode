#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> a;
    for(int i=0;i<n;++i){
        a.push_back(nums[i]);
        a.push_back(nums[i+n]);
    }
    return a;
}



int main(){
    vector<int> nums={1,2,3,4,5,6};
    int n=3;
    vector<int> result=shuffle(nums, n);
    for(int x:result){
        cout << x << " ";
    }
}
