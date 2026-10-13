#include <iostream>
#include <map>
#include <vector> //optimize the vector
using namespace std;

void BestMethodTofindMajorityElement(vector<int> &arr)
{
    int n = arr.size();
    map<int, int> myMap;
    for (int i = 0; i < n; i++)
    {
        myMap[arr[i]]++;
    }
    for (const auto &pair : myMap)
    {
        cout << pair.first << " appear " << pair.second << " times\n";
        if (pair.second > n / 2)
        {
            cout << "this element is majority element: " << pair.first << '\n';
        }
    }
};

void optimial(vector<int> &arr)
{
    cout << "\nOptimial methode: ";
    int n = arr.size();
    int count = 0;
    int majorityElement;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            majorityElement = arr[i];
            count = 1;
        }
        else if (majorityElement == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int countOfPredictedElenment = 0;
    cout << "\n code is running at counOfPredictedElement and majorityElemet: " << majorityElement << " and count: " << count;
    for (int i = 0; i < n; i++)
    {
        if (majorityElement == arr[i])
        {
            countOfPredictedElenment++;
        }
    }
    if (countOfPredictedElenment > n / 2)
    {
        cout << "\nThe majority element in given array: " << majorityElement;
    }

    else
        cout << "\nNo majority Element.";
    cout << "\n Runing last else";
};
int main()
{
    int n; // size of ur array

    cin >> n;
    // int arr[n]; ! this is not optimized way
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Analyzing ur inputs\n";
    BestMethodTofindMajorityElement(arr);
    optimial(arr);
    return 0;
}