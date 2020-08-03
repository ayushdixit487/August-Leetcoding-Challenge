class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==0)
            return true;
        
        string st="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ' && isalnum(s[i]))
                st+=s[i];
        }
        if(st.length()<2)
            return true;
        
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        cout<<st;
        string stRev = st;
        reverse(st.begin(), st.end());
        return stRev== st;
    }
};
