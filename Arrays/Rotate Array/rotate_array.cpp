class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int l;
        l=k%nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,l-1);
        reverse(nums,l,nums.size()-1);

    }
    void reverse(vector<int>& num2, int start, int end){
        int temp;
        while(start<end){
            temp=num2[start];
            num2[start]=num2[end];
            num2[end]=temp;
            start++;
            end--;
        }
    }
};
