class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<int, int>m;
        int n=nums.size();
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(m[nums[i]-1]==0 && m[nums[i]]>0){
                int l=k;
                while(k>0){
                    if(m[nums[i]]>0)
                        m[nums[i]]--;
                    else
                        return false;
                    nums[i]++;
                    k--;
                    count++;
                }
                k=l;
            }
        }
        return count==n;
    }
};
