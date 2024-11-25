class Solution {
    public boolean isBalanced(String num) {
        int e=0,o=0;
        for(int i=0;i<num.length();i++)
        {
            if(i%2==0)
            {
                int d = Character.getNumericValue(num.charAt(i));
                e+=d;
            }
            else
            {
                int d = Character.getNumericValue(num.charAt(i));
                o+=d;
            }
        }
        if(e==o) return true;
        return false;
        
    }
}