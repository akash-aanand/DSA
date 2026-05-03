#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // precomputation
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
       map[arr[i]]++;
    }

    //* auto iteration of map
    for (auto it : map)
    {
        cout<<it.first <<"->"<< it.second<<endl;
    }
    

        
    // queries
    int q;
    cout<<"Enter the queries: ";
    cin>>q;
    while (q--)
    {
       int m;
       cout<<"Enter the number u want to count their repeatition : ";
       cin>>m;
    //    fetching
    cout<<map[m]<<endl;

    }
    
    
}