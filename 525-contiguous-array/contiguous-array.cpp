class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        int count = 0, maxLength = 0;
        m[0] = -1;
        for(int i=0;i<nums.size();i++){
            count = count + (nums[i] == 1 ? 1 : -1);
            if(m.find(count) != m.end()){
                maxLength = max(maxLength, i - m[count]);
            }else{
                m[count] = i;
            }
        }

        return maxLength;
    }
};