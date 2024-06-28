class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            set<int>st;
                for(int k=i;k<=j;k++)
                {
                    st.insert(nums[k]);
                }
            int m=st.size();
            s+=(m*m);
            st.clear();
            }
        }
        return s;
    }
};