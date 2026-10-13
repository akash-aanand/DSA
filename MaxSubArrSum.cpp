#include <iostream>
#include <vector>
using namespace std;

int MaxSubArrSum(vector<int> &arr)
{
    cout<<"\nMaxsub... runing at begining";
    int n = arr.size();
    int sum = 0;
    int Max = 0;
    int startPointer;
    int Endpointer;
    cout<<"\nMaxsub.. reach the for loop";
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            startPointer = i;
        }
        sum +=arr[i];

        if (sum > 0)
        {
            if (Max < sum)
            {
                Endpointer = i;
            }
            Max = max(Max, sum);
        }
        else
            sum = 0;
    }
    cout<<"\nMaxSub... runing";
    return Max;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int rax = MaxSubArrSum(arr);
    cout<<"\n" <<rax;

    return 0;
}