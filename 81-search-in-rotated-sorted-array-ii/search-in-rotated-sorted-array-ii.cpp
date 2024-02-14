class Solution {
public:
    bool search(vector<int>& arr, int t) {
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(arr[m]==t) return true;
            if(arr[l]==arr[m] and arr[m]==arr[r])
            {
                l++;
                r--;
                continue;
            }
            if(arr[l]<=arr[m])
            {
                if(arr[l]<=t and t<=arr[m])
                {
                    r=m-1;
                }
                else
                {
                    l=m+1;
                }
            }
            else
            {
                if(arr[m]<=t and t<=arr[r])
                {
                    l=m+1;
                }
                else
                {
                    r=m-1;
                }
            }
        }
        return false;
        
    }
};