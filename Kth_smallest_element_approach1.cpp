#include<bits/stdc++.h>
using namespace std;

int smallest(vector<int> arr , int k){
  sort(arr.begin() , arr.end());
  return arr[k-1];
}

int main(){
  int k;
  cin >> k;
  int n; // size of array
  cin >> n;
  vector<int> arr;
  for(int i = 0 ; i < n ; i++){
      int x;
      cin>>x;
      arr.push_back(x);
    // cin >> arr[i];
  }
  cout <<" The "<<k<<"th smallest integer in array is "<<smallest(arr , k)<<endl;
  return 0;
}
