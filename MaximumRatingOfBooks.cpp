#include <bits/stdc++.h>
using namespace std;

int func(int a , vector<vector<int>> h , vector<vector<int>> s){
    h.insert(h.end() , s.begin() , s.end());
    sort(h.begin() , h.end() , [](const vector<int> &a , const vector<int> &b){
        if(a[1] == b[1]) return a[0] > b[0];
        else return a[1] < b[1];
    });
    int n = h.size();
    int price = 0;
    int rating = 0;
    for(int i = 0 ; i < n ; i++){
        price = price + h[i][1];
        if(price <= a){
            rating = rating + h[i][0];
        }else{
            break;
        }
    }
    if(rating == 0) return -1;
    return rating;
}

int main()
{
    vector<vector<int>> a = {{5,5} , {3,6} , {6,2}};
    vector<vector<int>> b = {{6,3} , {4,3} , {2,10}};
    int ans = func(50 , a , b);
    cout<<ans;

    return 0;
}
