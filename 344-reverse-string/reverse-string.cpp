class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int l, r;
        if(n % 2 == 0){
            l = n/2 - 1;
            r = n/2;
        }else{
            l = n/2;
            r = n/2;
        }

        while( l >= 0 && r < n){
            swap(s[l],s[r]);
            l--;
            r++;
        }

    }
};