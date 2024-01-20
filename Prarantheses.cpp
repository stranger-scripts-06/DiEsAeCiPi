class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int ans = 0;
        int open = 0;
        int close = 0;

        for(int j=0;j<s.length();j++){

            if((open - close) == 0 && s[j] == ')'){
                    ans++;
            }
            else if(s[j] == '(') open++;
            else close++;
        }
        ans += (open-close);
        
        return ans;

    }
};