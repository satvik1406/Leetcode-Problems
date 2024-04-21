class Solution {
    bool checkPath(vector<vector<int>>& edges, vector<int>& visited, int source, int destination){
        visited[source] = 1;
        if(source == destination) return true;

        for(auto node: edges[source]){
            if(!visited[node] && checkPath(edges, visited, node,destination)) return true;
        }

        return false;
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> v(n,vector<int>());
        vector<int> visited(n,0);
        for(int i = 0;i<edges.size();i++){
            v[edges[i][0]].push_back(edges[i][1]);
            v[edges[i][1]].push_back(edges[i][0]);
        }

        for(int i=0;i<v.size();i++){
            if(i == source){
                return checkPath(v, visited, source, destination);
            }
        }

        return false;
    }
};