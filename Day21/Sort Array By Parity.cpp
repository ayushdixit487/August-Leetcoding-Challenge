class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        if(A.size()==0)
            return A;
        int i = 0;
        int j=0;
        while(j<A.size()){
            if(A[j]%2==0){
                swap(A[i],A[j]);
                i++;
                j++;
            }else{
                j++;
            }
        }
        return A;
    }
};
