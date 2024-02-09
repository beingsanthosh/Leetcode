class Solution {
public:
    int prime(int n){
        if(n<=1) return 0;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return 0;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxx=-1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(prime(nums[i][i]))
            {
                maxx=max(maxx,nums[i][i]);
            }
            if(prime(nums[i][n-i-1]))
            {
                maxx=max(maxx,nums[i][n-i-1]);
            }
        }
        if(maxx!=-1)
        {
            return maxx;
        }
        return 0;
        
    }
};