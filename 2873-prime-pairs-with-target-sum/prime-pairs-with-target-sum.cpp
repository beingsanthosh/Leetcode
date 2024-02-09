class Solution {
public:
    int prime(int n)
    {
        if(n<=1) return 0;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return 0;
        }
        return 1;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>v;
        if(n<=2) return v;
        for(int i=2;i<=n/2;i++)
        {
            if(prime(i) and prime(n-i))
            {
                v.push_back({i,n-i});
            }
        }
        return v;
        
    }
};