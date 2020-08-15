class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
	return a[1] < b[1];
}
int eraseOverlapIntervals(vector<vector<int>>& nums) {
	sort(nums.begin(), nums.end(), comp);
	int count = 0, j = 0;
	vector<int> check;
	for(int i = 1; i < nums.size(); i++){
		if(nums[j][1] > nums[i][0])
			count++, check.push_back(i);
		else{
			j++;
			if(check.size() and check.back() >= j)
				j = check.back()+1;
		}
	}
	    return count;
    }
};
