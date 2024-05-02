class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int> m;
        int maxPos = -1;
        for(int number:nums){
            if(m.find(-number) != m.end()){
                if(maxPos < abs(number)) maxPos = abs(number);
            }

            m[number]++;
        }

        return maxPos;
    }
};