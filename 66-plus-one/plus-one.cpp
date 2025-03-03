class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n=arr.size();
        if(arr[n-1]!=9)
        {
            arr[n-1]=arr[n-1]+1;
            return arr;
        }
        else
        {
            if(n==1)
            {
                return {1,0};
            }
            else
            {
                int i=n-1,c=1;
                while(i>=0)
                {
                    if(arr[i]==9 and c==1)
                    {
                        arr[i]=0;
                        c=1;
                    }
                    else
                    {
                        arr[i]=arr[i]+c;
                        c=0;
                    }
                    i--;
                }
                if(c==1)
                {
                    arr.insert(arr.begin(), 1);
                }
            }
            return arr;
        }
        return {};
        
    }
};