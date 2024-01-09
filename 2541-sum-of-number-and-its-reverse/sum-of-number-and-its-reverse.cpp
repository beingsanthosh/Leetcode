class Solution {
public:
    int reverse(int n)
    {
        int s=0;
        while(n!=0)
        {
            s=(s*10)+(n%10);
            n=n/10;
        }
        return s;
    }
    bool sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        for(int i=1;i<=num;i++)
        {
            if(i+reverse(i)==num)
            {
                return true;
            }
        }
        return  false;
        
    }
};