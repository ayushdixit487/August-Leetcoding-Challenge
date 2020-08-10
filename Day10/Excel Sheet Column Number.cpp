class Solution {
public:
    int titleToNumber(string s) {
        if(s.length()==1){
            return s[0]-'A'+1;
        }
        long long int ans = (s[0]-'A'+1)*26 + (s[1]-'A'+1);
        int n = s.length();
        for(int i=2;i<n;i++){
                ans = ans*26;
                ans = ans + (s[i]-'A'+1);
        }
        return ans;
    }
};
