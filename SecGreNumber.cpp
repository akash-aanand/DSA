#include<iostream>
#include<vector>
using namespace std;

int SecGrNum(vector<int>&arr,int n){
    int GreNum=0;
    int SecNum;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]>SecNum){
        SecNum=arr[i];
        if (arr[i]>GreNum)
        {
            SecNum=GreNum;
            GreNum=arr[i];
            // cout<<GreNum<<endl;
        }
    }
    }
    return SecNum;
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
    int SecNum=SecGrNum(arr,n);
    cout<<SecNum;
    return 0;
}