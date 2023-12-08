class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        vector<bool>prime(n,true);
        prime[1]=prime[0]=false;
        
        int count=0;
        for(int i=2;i<n;i++){

            if(prime[i]){

                count++;
                int j=2*i;
                while(j<n){

                    prime[j]=false;
                    j+=i;
                }
            }
        }
        return count;
    }
};
