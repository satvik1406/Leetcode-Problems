class Solution {
public:

    void dfs(vector<vector<char>>& grid, vector<vector<int>>& visited, int i, int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()) return;
        if(visited[i][j] || grid[i][j] == '0') return;
        visited[i][j] = 1;

        dfs(grid,visited,i-1,j);
        dfs(grid,visited,i+1,j);
        dfs(grid,visited,i,j-1);
        dfs(grid,visited,i,j+1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int res = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    dfs(grid,visited,i,j);
                    res++;
                }
            }
        }

        return res;
    }
};