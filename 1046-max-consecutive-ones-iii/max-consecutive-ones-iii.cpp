class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,r=0,maxx=0,c=0;
        while(r<n)
        {
            if(arr[r]==0)
            {
                c++;
            }
            while(c>k)
            {
                if(arr[l]==0)
                {
                    c--;
                }
                l++;
            }
            if(c<=k)
            {
                int len=r-l+1;
                maxx=max(maxx,len);
            }
            r++;
        }
        return maxx;
        
    }
};