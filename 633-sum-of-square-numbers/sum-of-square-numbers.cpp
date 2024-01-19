class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0) return true;
        for(long long i=1;i*i<=c;i++)
        {
            long long a=c-(i*i);
            double sq=sqrt(a);
            if((int)sq==sqrt(a))
            {
                return true;
            }
        }
        return false;
        
    }
};