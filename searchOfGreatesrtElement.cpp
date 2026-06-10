#include<iostream>
#include<vector>
using namespace std;
int GreatElement(vector<int>&arr){
    int bigest_num=0;
    int n= arr.size();
    for (int i = 0; i < n; i++)
    {
       if (arr[i]>bigest_num)
       {
        bigest_num=arr[i];
       }
       
    }
    return bigest_num;
    
}
 int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x ;
       arr.push_back(x);
    }
   int y=  GreatElement(arr);
   cout<<y;
 }