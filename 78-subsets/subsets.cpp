class Solution {
public:
    void fun(int i,vector<int>&ds,vector<int>nums,int n,vector<vector<int>>&ans)
    {
        if(i==n)
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        fun(i+1,ds,nums,n,ans);
        ds.pop_back();
        fun(i+1,ds,nums,n,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        fun(0,ds,nums,n,ans);
        return ans;


    }
};