class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int t) {
        int n=arr.size();
        if(t==0) return true;
        if(n==1)
        {
            if(t==1 and arr[0]==0) return true;
            return false;
        }
        for(int i=0;i<n-1;i++)
        {
            if(i==0)
            {
           if(arr[i]==0 and arr[i+1]==0 )
           {
            arr[i]=1;
            t--;
           }
            }
            else
            {
                if(arr[i-1]==0 and arr[i]==0 and arr[i+1]==0)
                {
                    arr[i]=1;
                    t--;
                }
            }
        }
        if(arr[n-1]==0 and arr[n-2]==0)
        {
            t--;
        }
        if(t<=0) return true;
        return false;
        
    }
};