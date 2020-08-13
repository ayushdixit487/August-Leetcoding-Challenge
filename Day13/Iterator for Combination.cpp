class CombinationIterator {
public:
    vector<string> temp;
    int i;
    CombinationIterator(string characters, int combinationlength) {
        i=0;
        
        backtrack(characters,combinationlength,0,"");
    }
    
    void backtrack(string characters,int combinationlength,int idx,string ans){
        if(ans.size()==combinationlength){
            temp.push_back(ans);
            return;
        }
        for(int i=idx;i<characters.size();i++){
            ans.push_back(characters[i]);
            backtrack(characters,combinationlength,i+1,ans);
            ans.pop_back();
        }
    }
    
    string next() {
        return temp[i++];
    }
    
    bool hasNext() {
        return i<temp.size();
    }
};
