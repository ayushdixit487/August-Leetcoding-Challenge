class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int indx = abs(nums[i])-1;
        if(nums[indx]<0){
            ans.push_back(abs(nums[i]));  
        }
        nums[indx] = -nums[indx];
        } 
        return ans;
    }
    
};
