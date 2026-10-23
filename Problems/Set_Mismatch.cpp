#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    int d=0;
    int m=0;
    int n=nums.size();
    for(int i=1;i<=n;++i){
        int c=0;
        for(int j=0;j<n;++j){
            if(nums[j]==i){
                c++;
            }
        }
        if(c==2){
            d=i;
        }
        if(c==0){
            m=i;
        }
    }
    return {d,m};
}



int main(){
    vector<int> nums={1,2,2,4};
    vector<int> result=findErrorNums(nums);
    for(int x:result){
        cout << x << " ";
    }
}
