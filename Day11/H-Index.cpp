class Solution {
public:
    int hIndex(vector<int>& citations) {
        priority_queue<int> pq;
        for(auto c : citations){
            pq.push(c);
        }
        int ans = 0 ;
       for (ans = 0; !pq.empty() && ans < pq.top(); ++ans)
            pq.pop();
        
        return ans;
    }
};
