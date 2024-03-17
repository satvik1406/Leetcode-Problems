class Solution {
public:

    void insertInterval(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool isIntervalInserted = false;
        for (int i = 0; i < intervals.size(); i++) {
            if (newInterval[0] < intervals[i][0]) {
                intervals.insert(intervals.begin() + i, newInterval);
                isIntervalInserted = true;
                break;
            }
        }
        
        if (!isIntervalInserted) {
            intervals.push_back(newInterval);
        }
    }

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        if(intervals.size() == 0){
            res.push_back({newInterval[0],newInterval[1]});
            return res;
        }
        insertInterval(intervals,newInterval);
        pair<int,int> mover = {intervals[0][0],intervals[0][1]};
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0] >= mover.first && intervals[i][0] <= mover.second){
                mover.first = min(intervals[i][0],mover.first);
                mover.second = max(intervals[i][1],mover.second);
            }else{
                res.push_back(vector<int>{mover.first,mover.second});
                mover.first = intervals[i][0];
                mover.second = intervals[i][1];
            }
        }

        res.push_back(vector<int>{mover.first,mover.second});

        return res;
    }
};