class Solution {
public:
    int search(vector<int>& arr, int t) {
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(arr[m]==t)
            {
                return m;
            }
            else if(t>arr[m])
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        return -1;
        
    }
};