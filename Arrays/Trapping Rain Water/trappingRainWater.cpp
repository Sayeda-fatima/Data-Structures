class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        int n=height.size();
        int left=0, right=n-1;
        int l_max=0, r_max=0;
        while(left<=right){
            if(r_max<=l_max){
                sum+=max(0, r_max-height[right]);
                r_max=max(r_max, height[right]);
                right--;
            }
            else{
                sum+=max(0, l_max-height[left]);
                l_max=max(l_max, height[left]);
                left++;
            }
        }
        return sum;
    }
};
