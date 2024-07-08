class Solution {
public:
    double myPow(double x, int n) {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        if(n==0) return 1;
        if(n==1) return x;
        if(n<0)
        {
            x=1/x;
            n=-n;
        }
        if(n%2==0)
        {
            double half=myPow(x,n/2);
            return half*half;
        }
        else
        {
            double half=myPow(x,(n-1)/2);
            return half*half*x;
        }
      
    }
};