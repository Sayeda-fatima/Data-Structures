class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
            return false;
        int left=0;
        int right=n-1;
        while(left<n-1 && arr[left]<arr[left+1])
            left++;
        while(right>0 && arr[right-1]>arr[right])
            right--;
        if(left>0 && left==right && right<n-1)
            return true;
        
        return false;
        
    }
};
