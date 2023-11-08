#include<bits/stdc++.h>
using namespace std;

int minMoves(string s) {
  int n = s.size();
  int left = 0;
  int right = n - 1;
  int count = 0;

  while(left < right){
    int i = left;
    int j = right;
    while(s[i] != s[j]){
      j--;
    }
    if(i == j){
      while(i < (n/2)){
        swap(s[i] , s[i+1]);
        count++;
        i++;
      }
    }
    else{
      while(j < right){
        swap(s[j] , s[j+1]);
        count++;
        j++;
      }
      left++ ;
      right--;
    }    
  }

  return count;
}

int main(){
  string s = "aaletelt";
  cout<<"The minimum number of moves to make this string a palindrome are :" <<minMoves(s)<<endl;
  return 0;
}
