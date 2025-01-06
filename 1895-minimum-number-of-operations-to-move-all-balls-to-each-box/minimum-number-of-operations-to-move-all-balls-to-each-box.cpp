class Solution {
public:
    vector<int> minOperations(string arr) {
        int n=arr.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='1')
            {
                for(int j=0;j<n;j++)
                {
                    ans[j]+=abs(j-i);
                }
            }
        }  
        return ans;      
    }
};