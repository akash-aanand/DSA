#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    //* inputs  :
    int n;
    cout<<"Enter the array length: ";
    if(!(cin>>n)) return 0;
    vector<int> arr(n);
    int max_val=0;
    cout<<"enter the element: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (max_val<arr[i]) max_val= arr[i];
        
    }
    //*precomputing 
     vector<int> hash_arr(max_val+1,0);
      for (int i = 0; i < n; i++)
      {
        hash_arr[arr[i]]+=1;
      }
      

    //! taking numbers which u have to find the counts from array 
    int q;
    cout<<"Enter the numbers of element which u want to count their numbers: ";
    cin>>q;


    while (q--)
    {
        int numbers;
        cout<<"Enter the number which counts u want to know: ";
        cin>>numbers;
        //fetch

        cout<<"the count of "<< numbers <<" :" <<hash_arr[numbers]<<endl;
    }
    
    


    return 0;
}