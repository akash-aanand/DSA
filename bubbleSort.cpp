#include <iostream>
using namespace std;
void bubbleSort(int n, int arr[])
{
    for (int i = n - 1; i >= 1; i--)
        // optimization
        {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap=1;
            }
        }
        if (didSwap != 1)
        {
            cout<<didSwap<<endl;
            break;
        }

   }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}