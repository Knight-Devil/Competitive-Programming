#include <bits/stdc++.h>
using namespace std;

void generate(vector<int> &subset, int i, vector<int> &nums, vector<vector<int>> &subsets)
{

    if (i == nums.size())
    {
        subsets.push_back(subset);
        return;
    }

    // ith element not in the subset
    generate(subset, i + 1, nums, subsets);

    // ith element in the subset
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums, subsets);
    subset.pop_back();
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int> subset;
    vector<vector<int>> subsets;

    generate(subset, 0, arr, subsets);

    for (auto subset : subsets)
    {
        for (auto element : subset)
        {
            cout << element << " ";
        }
        cout << "\n";
    }

    // we are going to find all the subsets for the array of length n
}