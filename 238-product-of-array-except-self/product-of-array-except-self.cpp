class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        res.push_back(1);
        for(int i=0;i<n-1;i++){
            res.push_back(res[i]*nums[i]);
        }
        int productSoFar = 1;
        for(int i=n-1;i>=0;i--){
            res[i] = res[i] * productSoFar;
            productSoFar *= nums[i];
        }

        return res;
    }
};

// 3 4 5 6

// 1 3 12 60
// 360 120 30 6 1

// 120 90 72 60

// 1 1
// 24 12 4 1

