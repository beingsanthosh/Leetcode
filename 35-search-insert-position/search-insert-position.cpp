class Solution {
public:
    int searchInsert(vector<int>& arr, int t) {
        int n=arr.size();
        int l=0,r=n-1,ans=n;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(arr[m]>=t)
            {
                ans=m;
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};