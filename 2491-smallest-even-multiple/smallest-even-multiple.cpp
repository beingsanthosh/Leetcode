class Solution {
public:
    int smallestEvenMultiple(int n) {
        int a=__gcd(n,2);
        int b=(2*n)/a;
        return b;
    }
};