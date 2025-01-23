class Solution {
public:
    void merge(vector<int>&arr,int l,int m,int r)
    {
        vector<int>temp;
        int left=l;
        int right=m+1;
        while (left <= m && right <= r) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= m) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= r) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = l; i <=r; i++) {
        arr[i] = temp[i - l];
    }

    }
    void mergesort(vector<int> &arr,int l,int r)
    {
        if(l>=r) return;
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    vector<int> sortArray(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1;
        mergesort(arr,l,r);
        return arr;
    }
};