class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        if(n==0) return 0;
        int l=1;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        for(auto i:st)
        {
            if(st.find(i-1)==st.end())
            {
                int cnt=1;
                int x=i;
                while(st.find(x+1)!=st.end())
                {
                    x=x+1;
                    cnt=cnt+1;
                }
                 l=max(l,cnt);
            }


        }
        return l;
    }
};