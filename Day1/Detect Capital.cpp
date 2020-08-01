class Solution {
public:
    bool detectCapitalUse(string word) {
      int count = 0;
        int n = word.length();
        for(int i=0;i<n;i++){
            if(int(word[i])>=65 && int(word[i])<91)
                count++;
        }
        if(count==n || count ==0)
            return true;
        else if(count ==1 && int(word[0]) <91)
            return true;
        else 
            return false;
    }
};
