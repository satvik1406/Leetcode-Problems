class Solution {
public:
    int returnCount(int i){
        int count = 0;
        while(i > 0){
            if(i&1 > 0) count++;
            i >>= 1;
        }

        return count;
    }

    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
        for(int i=0;i<res.size();i++){
            res[i] = returnCount(i);
        }

        return res;
    }
};