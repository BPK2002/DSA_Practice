long long trappingWater(int arr[], int n){
        // code here
        long long ans = 0;
        if(n == 1) return ans;
        int i = 1;
        int j = 0;
        while(i < n){
            int x = arr[j];
            while(i < n){
                if(x > arr[i]){
                    i++;
                }else if(x <= arr[i]){
                    break;
                }
            }
            if(i == n){
                int y = max_element(arr + j + 1 , arr + i) - arr;
                int z = arr[y];
                for(int k = j+1 ; k < y ; k++){
                    ans += (long long)(z - arr[k]);
                }   
                j = y;
                i = j+1;
            }else{
                for(int k = j+1 ; k < i ; k++){
                    ans += (long long)(x - arr[k]);
                }
                j = i;
                i++;
            }
        }
        return ans;
    }
