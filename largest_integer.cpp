#include<bits/stdc++.h>
using namespace std;

long largest_integer(int k){
  if(k < 2 || k > 9){
    cout<<"Invalid number to divide with."<<endl;
    return 0;
  }
  long N = 0;
  for(int i = 0; i < k ; i++){
    N *= 10;
    N += k - 1;
  }
  return N;
}

int main(){
  int k;
  cin >> k;
  long N = largest_integer(k);
  cout << "The largest integer is "<<N<<endl;
  return 0;
}
