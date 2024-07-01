class Solution {
public:
    int minBitFlips(int s, int g) {
        int c=0;
        for(int i=0;i<32;i++)
        {
            if((s&(1<<i))!=(g&(1<<i)))
            {
                c++;
            }
        }
        return c;

    }
};