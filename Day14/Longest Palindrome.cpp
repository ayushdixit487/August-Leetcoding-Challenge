class Solution {
public:
    int longestPalindrome(string s) {
        map<char ,int> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans = 0 ;
        for(auto it : mp){
            ans =  ans + (it.second/2)*2;
            
            if(it.second%2!=0 && ans%2==0)
                ans++;
            
        }
        return ans;
    }
};
