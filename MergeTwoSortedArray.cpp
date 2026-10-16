class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            if(n==0) return;
        long long count1=0;
        while(count1<(static_cast<int>(nums1.size()))){
            if(count1>= m){
                nums1[count1]=nums2[0];
                nums2.erase(nums2.begin());
                count1++;
            }
            else if(nums1[count1]<=*nums2.begin()) count1++;
            else {
                swap(nums1[count1],nums2[0]);
                count1++;
                for(int i=0; i<n-1;i++){
                    if(nums2[i]<=nums2[i+1]) break;
                    swap(nums2[i],nums2[i+1]);
                    
                }

            }
        }
    }
};