class Solution {
public:
    int search(vector<int>& arr, int t) {
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(arr[m]==t) return m;
            //left sorted
            if(arr[l]<=arr[m])
            {
                if(arr[l]<=t and t<=arr[m])
                {
                    r=m-1;;
                }
                else
                {
                    l=m+1;
                }
            }
            //roght sorted
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
        return -1;
    }
};