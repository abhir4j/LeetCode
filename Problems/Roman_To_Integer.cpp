#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    int roman[128]={0};
    roman['I']=1;
    roman['V']=5;
    roman['X']=10;
    roman['L']=50;
    roman['C']=100;
    roman['D']=500;
    roman['M']=1000;
    int total=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i<n-1 && roman[s[i]]<roman[s[i+1]]){
            total-=roman[s[i]];
        }
        else{
            total+=roman[s[i]];
        }
    }
    return total;
}


int main(){
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
    
}
