class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int profit=0;
        int mini=arr[0];
        int cost=0;
        for(int i=1;i<n;i++)
        {
            cost=arr[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,arr[i]);
        }
        return profit;
    }
};