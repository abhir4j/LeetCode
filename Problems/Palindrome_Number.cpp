#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x){
  long temp=x, digit, rev=0;
  while(temp>0){
    digit=temp%10;
    rev=rev*10+digit;
    temp=temp/10;
  }
  if(x==rev){
    return true;
  }
  return false;
}

int main(){
  int x=121;
  bool result = isPalindrome(x);
  cout << boolalpha << result << endl;
}
