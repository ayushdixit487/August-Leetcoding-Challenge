class Solution {
public:
    vector<int> pancakeSort(vector<int>& Arr) {
        int m = Arr.size();
	    vector<int> res;
	    int index;
      while(m){
	   	for(int i=0;i<m;i++){
		if(Arr[i]==m){
		index=i;
		break;
	  }
	 }
	if(index!=(m-1)){
	reverse(Arr.begin(),Arr.begin()+index+1);
	res.push_back(index+1);
	reverse(Arr.begin(),Arr.begin()+m);
	res.push_back(m);
	}
     m--;     
   }
    return res;
        
    }
    
};
