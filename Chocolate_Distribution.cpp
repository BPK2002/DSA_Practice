#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin() , a.end());
        long long minimum = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            long long x = 0;
            if(i + m - 1 <= n - 1){
                x = a[m - 1 + i] - a[i];
                minimum = min(minimum , x);
            }
        }
        return minimum;
} 
int main(){
  vector<long long> a = {3, 4, 1, 9, 56, 7, 9, 12};
  long long n = a.size();
  long long m = 5;
  cout<<"The minimum difference is : "<<findMinDiff(a , n , m)<<endl;
  return 0;
}
