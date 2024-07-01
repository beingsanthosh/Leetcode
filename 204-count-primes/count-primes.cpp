class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        vector<int>vet(n+1,1);
        vet[0]=0;
        vet[1]=0;
        for(int i=2;i*i<=n;i++)
        {
            if(vet[i]==1)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    vet[j]=0;
                }
            }
        }
        int c=0;
        for(int i=1;i<n;i++)
        {
            if(vet[i]==1)
            {
                c++;
            }
        }
        return c;
        
    }
};