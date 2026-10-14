#include <bits/stdc++.h>
using namespace std;

int singleNum(vector<int>& nums){
    int a=0;
    for(int x : nums){
        a=a^x;
    }
    return a;
}
int main(){
    vector<int> nums={2,2,1};
    int result=singleNum(nums);
    cout << result << endl;
    return 0;
}
