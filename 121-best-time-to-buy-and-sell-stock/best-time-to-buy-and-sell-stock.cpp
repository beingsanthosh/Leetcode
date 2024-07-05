class Solution {
public:
    int maxProfit(vector<int>&arr) {
        int n=arr.size();
        int minn=arr[0];
        int profit=0;
        for(int i=1;i<n;i++)
        {
            int cost=arr[i]-minn;
            profit=max(profit,cost);
            minn=min(arr[i],minn);
        }
        return profit;
        
    }
};