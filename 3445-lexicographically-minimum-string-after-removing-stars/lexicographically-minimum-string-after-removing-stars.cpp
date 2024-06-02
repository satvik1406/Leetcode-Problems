class Solution {
public:
    struct comp {
        bool operator()(const pair<char, int>& c1, const pair<char, int>& c2) const {
            if (c1.first == c2.first) {
                return c1.second < c2.second;
            }
            return c1.first > c2.first;
        }
    };

    string clearStars(string s) {
        priority_queue<pair<char, int>, vector<pair<char, int>>, comp> pq;
        pair<char, int> temp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') {
                if (!pq.empty()) {
                    temp = pq.top();
                    pq.pop();
                    s[temp.second] = '!';
                }
            } else {
                temp = make_pair(s[i], i);
                pq.push(temp);
            }
        }

        string res = "";

        for (char x : s) {
            if (x != '!' && x != '*') {
                res += x;
            }
        }

        return res;
    }
};