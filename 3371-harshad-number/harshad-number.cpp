class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int t=x;
        int s=0;
        while(t)
        {
            int r=t%10;
            s+=r;
            t=t/10;
        }
        if(x%s==0) return s;
        return -1;
    }
};