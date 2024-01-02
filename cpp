 long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long ans = INT_MIN;
        long long j = 0;
        long long last = 0;
        long long sum = 0;
        
        for(int i =0;i<n; i++){
            sum = sum + a[i];
            if(i-j+1 == k)
            ans = max(ans , sum);
            
            else if(i-j+1>k){
                last = last + a[j];
                j++;
                if(last < 0){
                    sum = sum-last;
                    last =0;
                    
                }
                ans=max(ans,sum);
            }
        }
        
        return ans;
    }
