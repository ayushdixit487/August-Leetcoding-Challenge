class Solution {
public:
    string toGoatLatin(string S) {
        string ma = "ma";
        string ans = "";
        string temp  = "";
        string ch = "";
        S= S+" ";
        set<char>st = {'a' ,'e' ,'i','o','u' ,'A','E','I','O','U'};
        for(int i=0;i<S.length() ; i++){
           if(S[i]!=' '){
               if(temp.length()==0 && ch.length()==0)
                   ch= ch+S[i];
               else
                   temp = temp+S[i];
           }else{
               if(ch!="")
               ma =ma+'a';
               else{
                   ans =ans+"";
                   break;
               }
                   
               if(st.find(ch[0])!=st.end()){
                   ans = ans+ch+temp+ma;
               }else{
                   ans =ans+ temp+ch+ma;
               }
               temp ="";
               ch="";
               ans = ans +" ";
           }  
        }
        
        int n =  ans.length();
      return ans.substr(0,n-1);
    }
    
};
