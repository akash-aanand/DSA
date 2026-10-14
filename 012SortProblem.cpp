#include<iostream>
#include<vector>
#include<map>

using namespace std;


    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low=0;
        int mid=0;
        int high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    
};
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int>arra;
    sortColors(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    
    return 0 ;
}