#include <iostream>
#include <vector>
#include <set>
#include <array>

using namespace std;

vector<vector<int>> FindTriplet(vector<int> &nums)
{
    int n = nums.size();
    int first;
    int sec;
    int thr;
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        first = nums[i];
        for (int j = i + 1; j < n; j++)
        {
            sec = nums[j];

            for (int z = j + 1; z < n; z++)
            {
                thr = nums[z];
                vector<int> temp;
                if ((first + thr + sec) == 0)
                {
                    temp.push_back(first);
                    temp.push_back(sec);
                    temp.push_back(thr);

                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
};

vector<vector<int>> Best_threeSum(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(nums[i] + nums[j]);
            if (hashset.find(third) != hashset.end())
            {
                vector<int> temp;
                temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
};
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> ans = FindTriplet(arr);
    for (const auto &array : ans)
    {
        cout << "[";
        for (const auto &num : array)
        {
            cout << num << " ";
        }
        cout << "]";
    }

    return 0;
}