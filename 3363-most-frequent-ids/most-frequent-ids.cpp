class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        priority_queue<pair<long long, int>> pq;
        unordered_map<int, long long> m;
        vector<long long> res;
        for(int i=0;i<nums.size();i++){
            m[nums[i]] += freq[i];
            pq.push({m[nums[i]],nums[i]});

            while(!pq.empty()){
                pair<long long, int> p = pq.top();
                if(p.first != m[p.second]){
                    pq.pop();
                }else{
                    break;
                }
            }
            res.push_back(pq.top().first);
        }

        return res;
    }
};