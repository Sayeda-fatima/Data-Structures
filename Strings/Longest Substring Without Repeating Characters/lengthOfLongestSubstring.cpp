class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        unordered_map<char,int>mp;
        int i=0;
        for(int j=0; j<s.length(); j++){
            if(mp.count(s[j])>0)
                i=max(i, mp[s[j]]+1);
            count=max(count, j-i+1);
            mp[s[j]]=j;
        }
        return count;
    }
};
