class Solution {
public:
    int next(int n,vector<int> &vet)
    {
        int size = vet.size();
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (vet[i] == n) { 
                // Start checking for the next greater element after `n`
                found = true;
            }
            if (found && vet[i] > n) {
                return vet[i];
            }
        }
        return -1;

    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vet;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            int k=next(nums1[i],nums2);
            vet.push_back(k);
        }
        return vet;
    }
};