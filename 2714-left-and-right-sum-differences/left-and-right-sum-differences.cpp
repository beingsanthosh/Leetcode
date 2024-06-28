class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        vector<int>pre1(n,0);
        vector<int>pre2(n,0);
        pre1[0]=0;
        pre2[n-1]=0;
        for(int i=1;i<n;i++)
        {
            pre1[i]=pre1[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            pre2[i]=pre2[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans.push_back(abs(pre1[i]-pre2[i]));
        }
        return ans;
    }
};