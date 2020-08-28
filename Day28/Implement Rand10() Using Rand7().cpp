// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    vector<int> Rand10 = {1,2,3,4,5,6,7,8,9,10};
     int i = 7;
    int rand10() {
        i++;
        return Rand10[i%10];
    }
};
