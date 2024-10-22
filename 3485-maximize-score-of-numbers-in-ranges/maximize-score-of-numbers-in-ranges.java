class Solution {
    public boolean isPossible(int[] nums , int d , int mid){
        int prev = nums[0];
        
        for(int i = 1; i < nums.length; i++){
            int min = prev + mid;

            if(min > nums[i] + d){
                return false;
            }

            prev = Math.max(nums[i] , min);
        }
        return true;
    }
    public int maxPossibleScore(int[] start, int d) {
        int n = start.length;
        int ans = 0;

        Arrays.sort(start);

        int s = 0;
        int e = Integer.MAX_VALUE;

        while(s <= e){
            int mid = s + (e - s) / 2;
            
            if(isPossible(start , d , mid)){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
        

    }
}