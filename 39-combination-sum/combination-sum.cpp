class Solution {
public:
    void fun(int i,vector<int>arr,vector<int>ds,int t,vector<vector<int>>&ans,int n)
    {
        if(i==n)
        {
            if(t==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(arr[i]<=t)
        {
            ds.push_back(arr[i]);
            fun(i,arr,ds,t-arr[i],ans,n);
            ds.pop_back();
        }
        fun(i+1,arr,ds,t,ans,n);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
        vector<vector<int>>ans;
        int n=arr.size();
        vector<int>ds;
        fun(0,arr,ds,t,ans,n);
        return ans;

    }
};