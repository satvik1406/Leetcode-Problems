class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> commonChar(26,0), currentCount(26,0);
        vector<string> res;
        for(char x:words[0]){
            commonChar[x-'a']++;        
        }

        for(int i=0;i<words.size();i++){
            fill(currentCount.begin(), currentCount.end(),0);
            for(char x:words[i]){
                currentCount[x-'a']++;
            }

            for(int j=0;j<26;j++){
                commonChar[j] = min(commonChar[j],currentCount[j]);
            }
        }
        
        for(int j=0;j<26;j++){
            while(commonChar[j] != 0){
                res.push_back(string(1,j+'a'));
                commonChar[j]--;
            }
        }

        return res;
    }
};