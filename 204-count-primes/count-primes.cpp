class Solution {
public:
    int countPrimes(int n) {
        vector<bool>vet(n+1,true);
        vet[0]=false;
        vet[1]=false;
        for(int i=2;i*i<=n;i++)
        {
            if(vet[i]==true)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    vet[j]=false;
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(vet[i]==true)
            {
                c++;
            }
        }
        return c;
        
    }
};