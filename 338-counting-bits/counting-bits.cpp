class Solution {
public:
    int bits(int n)
    {
        int c=0;
        while(n)
        {
        if(n&1)
        {
            c++;
        }
        n=n>>1;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int>vet;
        for(int i=0;i<=n;i++)
        {
            vet.push_back(bits(i));
        }
        return vet;

    }
};