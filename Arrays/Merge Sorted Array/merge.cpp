class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,temp;
        for(i=0; i<m; i++){
            for(int j=0; j<nums2.size();j++){
            if(nums1[i]==0){
                nums1[i++]=nums2[j++];
            }
            } 
            if(nums1[i]>nums1[i+1]){
                nums1[i]=temp;
                temp=nums1[i+1];
                nums1[i+1]=nums1[i];
            }
        }
    }
};
