class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m+n-1;
        int ptr1 = m-1;
        int ptr2 = n-1;

        if( m+n == n) nums1 = nums2;

        while(end >= 0){
            if(ptr2 < 0) break;
            if(ptr1 >= 0 && nums1[ptr1] > nums2[ptr2]){
                nums1[end] = nums1[ptr1];
                ptr1--;
            }else {
                nums1[end] = nums2[ptr2];
                ptr2--;
            }
            end--;
        }
    }
};

// 1 5 6 6 2 3

// 1 2 2 5 6 3