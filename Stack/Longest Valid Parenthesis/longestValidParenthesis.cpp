class Solution {
public:
    int longestValidParentheses(string s) {
        int count=0;
        stack<int>temp;
        temp.push(-1);
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')
                temp.push(i);
            else{
                if(!temp.empty())
                temp.pop();
                if(!temp.empty())
                    count=max(count, i-temp.top());
                else
                    temp.push(i);
            }    
        }
        return count;
    }
};
