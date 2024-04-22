class Solution {
public:

    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(), deadends.end());
        unordered_set<string> visited;
        queue<pair<string, int>> q;
        
        q.push({"0000", 0});
        visited.insert("0000");
        
        while (!q.empty()) {
            auto [lock, turns] = q.front();
            q.pop();
            
            if (lock == target) {
                return turns;
            }
            
            if (dead.count(lock)) {
                continue;
            }
            
            for (int i = 0; i < 4; ++i) {
                for (int move = -1; move <= 1; move += 2) {
                    string nextLock = lock;
                    nextLock[i] = (nextLock[i] - '0' + move + 10) % 10 + '0';
                    if (!visited.count(nextLock)) {
                        visited.insert(nextLock);
                        q.push({nextLock, turns + 1});
                    }
                }
            }
        }
        
        return -1;
    }
};