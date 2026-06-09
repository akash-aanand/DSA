#include<iostream>
#include<vector>
using namespace std;
int fun(vector<int>&arr,int low, int high){
    int pivote= arr[low];
    int i=low;
    int j=high;
    while (i<j)
    {
        while (i<=high-1 && arr[i]<= pivote)
        {
            i++;
        }
        while (j>=low+1 && arr[j]>pivote)
        {
            j--;
        }
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
    
}
 void quickSort(vector<int>&arr,int low,int high){
    if (low<high)
    {
        int p;
        p= fun(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
    
 }
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    quickSort(arr,0,n-1);
    for(auto x:arr){
        cout<<x<<" ";
    }
    
    return 0;

}