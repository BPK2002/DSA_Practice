#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  int n = nums.size();
  if(n == 1){
    return 1;
  }
  int i = 0;
  int j = i + 1;
  while(j <  n){
    while(j < n && nums[i] == nums[j]){
      j++;
    }
    if(j < n){
      nums[i+1] = nums[j];
      i++;
    }
  }
  return i + 1;
}

int main(){
  vector<int> nums = {1,1,1,1,2,2,2,5,5,5,9,9,9,9,10};
  int n = removeDuplicates(nums);
  for(int i = 0 ; i < n ; i++){
    cout<<nums[i]<<" ";
  }
  return 0;
}
