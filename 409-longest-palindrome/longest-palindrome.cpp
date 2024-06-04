class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        int res = 0;
        bool oddBit = false;
        for(char x:s){
            m[x]++;
        }

        for(auto a:m){
            int x = a.second;
            if(x != 0){
                int temp = x/2;
                res += 2*temp;
                if(x%2 != 0 && !oddBit){
                    res+=1;
                    oddBit = true;
                }
            }
        }

        return res;
    }
};