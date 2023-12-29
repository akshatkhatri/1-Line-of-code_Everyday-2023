int longestSubarrayWithSumK(vector<int> a, long long k) {
  long long int sum = a[0];
  int i = 0;
   int maxi = 0;
   int j = 0;
    while(j<a.size()){
          while(i<=j&& sum>k){
        sum= sum-a[i];
        i++;
      }
        if(sum==k){
         int count = j -i;
          maxi =max(maxi,count+1);
      }
      j++;
      sum += a[j];
    }
  return maxi;
  }
    
