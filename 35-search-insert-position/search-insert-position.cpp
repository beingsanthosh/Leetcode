class Solution {
public:
    int searchInsert(vector<int>& arr, int t) {
        int n=arr.size();
        int l=0,r=n-1;
        if(t>arr[n-1])
        {
            return n;
        }
        while(l<=r)
        {
            int m=(l+r)/2;
            if(arr[m]==t)
            {
                return m;
            }
            else if(t<arr[m])
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return l;
    }
};