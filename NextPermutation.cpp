class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //here we use const to fix the variable type 'int' and variable not get change in future 
//
        const int n = static_cast<int>(nums.size());
// this required element which get to changed
        long long reElement= -1;
// search for required element and stored in 'reElement
        for(int i =n-2; i>=0;i--){
            if(nums[i]<nums[i+1]){
                reElement=i; 
                break;
            }
        } 
//putting the condition to handle the '-1' value in the case of whole array needed to reverse 
        if(reElement>=0){
//swaping the required element to proper position 
        for(int i =n-1; reElement<i;i--){
            if(nums[i]>nums[reElement]){
                swap(nums[i],nums[reElement]);
                break;
            }
        }
        }
        // reverse the array from next element of required element's index
             reverse(nums.begin()+reElement+1,nums.end());
            
    }
    
};
