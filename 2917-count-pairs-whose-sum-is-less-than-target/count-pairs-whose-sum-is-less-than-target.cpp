class Solution {
public:
    int countPairs(vector<int>& arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int l=0,r=n-1,c=0;
        while(l<r)
        {
            if(arr[l]+arr[r]<k)
            {
                c+=(r-l);
                l+=1;
            }
            else
            {
                r-=1;
            }
        }
        return c;

    }
};