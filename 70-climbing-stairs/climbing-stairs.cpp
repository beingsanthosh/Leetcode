class Solution {
    int stairs(int n,vector<int>& v,vector<int>& dp)
    {
        if(n==0) return 1;
        if(n<0) return 0;
        int ans = 0;
        if(dp[n]!=-1) return dp[n];
        for(auto i:v){
            ans = ans + (stairs(n-i,v,dp));
        }
        return dp[n] =ans;
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        vector<int>v={1,2};
        return stairs(n,v,dp);
    }
};