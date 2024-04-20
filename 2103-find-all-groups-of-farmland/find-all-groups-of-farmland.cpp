class Solution {
public:
    void findLands(vector<vector<int>>& land, vector<vector<int>>& visited, int i, int j, pair<int, int> & maxi){
        if(i < 0 || i >= land.size() || j < 0 || j >= land[0].size()) return;
        if(visited[i][j] || land[i][j] == 0) return;
        visited[i][j] = 1;
        if(i > maxi.first) maxi.first = i;
        if(j > maxi.second) maxi.second = j;
        findLands(land, visited, i-1, j, maxi);
        findLands(land, visited, i+1, j, maxi);
        findLands(land, visited, i, j-1, maxi);
        findLands(land, visited, i, j+1, maxi);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size();
        int m = land[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j] == 1 && !visited[i][j]){
                    pair<int, int> maxi =  {i,j};
                    findLands(land, visited, i, j, maxi);
                    res.push_back({i, j, maxi.first, maxi.second});
                }
            }
        }

        return res;
    }
};