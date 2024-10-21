class Solution {
public:
    int search(vector<int>vet,int t)
    {
        int n=vet.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(vet[m]==t)
            {
                return 1;
            }
            else if(vet[m]<t)
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        return 0;
    }
    bool searchMatrix(vector<vector<int>>& m, int t) {
        for(int i=0;i<m.size();i++)
        {
            if(search(m[i],t))
            {
                return true;
            }
        }
        return false;
    }
};