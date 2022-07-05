class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        
        for(auto it: nums)
            mp[it]++;
        
        for(auto it = mp.begin(); it != mp.end(); ++it)
            pq.push({it->second, it->first});
        
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};