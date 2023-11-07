#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int left, int right) {
    int pivotIndex = left + rand() % (right - left + 1);
    int pivotValue = arr[pivotIndex];
    
    // Swap pivot to the end
    swap(arr[pivotIndex], arr[right]);
    
    int i = left;
    
    for (int j = left; j < right; j++) {
        if (arr[j] < pivotValue) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    
    swap(arr[i], arr[right]); // Move pivot to its final position
    return i;
}

int quickselect(vector<int>& arr, int left, int right, int k) {
    if (left == right) {
        return arr[left];
    }
    
    int pivotIndex = partition(arr , left , right);
    
    if (k == pivotIndex) {
        return arr[pivotIndex];
    } else if (k < pivotIndex) {
        return quickselect(arr, left, pivotIndex - 1, k);
    } else {
        return quickselect(arr, pivotIndex + 1, right, k);
    }
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
  cout <<" The "<<k<<"th smallest integer in array is "<<quickselect(arr, 0, n-1,k - 1)<<endl;
  return 0;
}
