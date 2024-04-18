class Solution {
public:
    int dfs(vector<vector<int>>& grid,vector<vector<int>>& visited, int i, int j){
        if(i<0 || i >= grid.size() || j<0 || j >= grid[0].size()) return 1;
        if(grid[i][j] == 0) return 1;
        if(visited[i][j]) return 0;
        visited[i][j] = 1;
        int perimeter = 0;
        perimeter += dfs(grid,visited,i,j-1);
        perimeter += dfs(grid,visited,i,j+1);
        perimeter += dfs(grid,visited,i-1,j);
        perimeter += dfs(grid,visited,i+1,j);

        return perimeter;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int perimeter = 0;
        vector<vector<int>> visited(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    perimeter = dfs(grid,visited,i,j);
                }
            }
        }

        return perimeter;
    }
};