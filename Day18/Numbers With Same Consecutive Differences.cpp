class Solution {
public: 
    vector<int> numsSameConsecDiff(int N, int K) {
        vector<int> res;
        if(N==1){
            for(int i=0;i<=9;i++){
                res.push_back(i);
            }
            return res;
        }
        for(int i=1;i<=9;i++)
        genrate(N,K,0,res ,i);
        
        return res;
    }
    
    void genrate(int N,int K ,int temp ,vector<int> &res ,int cur){
         if(cur >9 || cur<0){
            return;
        }
        if(cur <=9 && cur>=0){
            temp = temp*10+cur;
        }
        
        string a = to_string(temp);
        if(a.length()==N){
            res.push_back(temp);
            return;
        }
         if(K!=0){
           genrate(N ,K  , temp,res,cur+K); 
           genrate(N ,K  , temp,res,cur-K);
              
         }else{
             genrate(N ,K  , temp,res,cur+K); 
         }
         
    }
};
