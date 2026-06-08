#include<iostream>
#include<vector>
using namespace std;

  int main (){
    vector<int>num;
    num.push_back(13);
    num.push_back(24);
    num.push_back(15);
    for (int i = 0; i < 5; i++)
    {
        int s;
        cin>>s;
        num.push_back(s);
    }
     for( auto x: num){
        cout<<x<<" ";
     }
    
    cout<<num.size();
    return 0;
  }