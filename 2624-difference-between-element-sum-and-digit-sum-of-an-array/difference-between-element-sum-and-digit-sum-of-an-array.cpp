class Solution {
public:     
    int suum(int n)
    {
        int s=0;
        while(n)
        {
            s+=(n%10);
            n=n/10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& arr) {
        int s1=0,s2=0,n=arr.size();
        for(int i=0;i<n;i++)
        {
            s1+=arr[i];
            s2+=suum(arr[i]);
        }
        return s1-s2;
    }
};