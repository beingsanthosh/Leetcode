class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n=arr.size();
        if(n==1 and arr[0]==0)
        {
        return true;
        }
        int maxx=0;
        for(int i=0;i<n;i++)
        {
            if(i>maxx)
            {
                return false;
            }
            maxx=max(maxx,i+arr[i]);
        }   
        return maxx;     
    }
};