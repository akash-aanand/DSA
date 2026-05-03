#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
int main(){
    string arr;
    cout<<"Enter your string:";
   cin>>arr;
    int hash_arr[26]={0};
    for (int i = 0; i < 26; i++)
    {
        hash_arr[arr[i]-'a']++;
    }
    
    
    // queries
    int q;
    cout<<"enter the queries size: ";
    cin>>q;
    while (q--)
    {
        cout<<"Enter character which you want to count: ";
        char c;
        cin>>c;
        // fetching
        cout<<hash_arr[c -'a']<<endl;
    }
    
    return 0;
}