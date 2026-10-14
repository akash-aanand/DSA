#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> MajorityIIelem(vector<int>& nums){
    int n= nums.size();
       vector<int>Majorityele;
    map<int,int>Mymap;
    for (int i = 0; i < n; i++)
    {
        Mymap[nums[i]]++;
    }

    for(const auto& pair : Mymap){
        if(pair.second>n/3){
            Majorityele.push_back(pair.first);

        }
    }
    
    return Majorityele;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int>arra;
    arra=MajorityIIelem(arr);
    for (int i = 0; i < arra.size(); i++)
    {
        cout<<arra[i];
    }
    
    return 0 ;
}