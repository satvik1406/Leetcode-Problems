class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        for(char x: word){
            if(x == ch) break;
            index++;
        }

        if(index == word.size()) return word;
        int start = 0;
        while(start <= index){
            swap(word[start],word[index]);
            start++;
            index--;
        }

        return word;


    }
};