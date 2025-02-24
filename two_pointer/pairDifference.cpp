#include <bits/stdc++.h>
using namespace std;

int pairDiff(vector<int> &nums, int target)
{

  // brute force approach O(n^2)
  int size = nums.size() - 1;
  // vector<int> ans;

  sort(nums.begin(), nums.end());

  // for (int i = 0; i < size - 1; i++)
  // {

  //   // we can do this using binary search nlogn

  //   int start = i + 1;
  //   int end = size - 1;

  //   while (start <= end)
  //   {
  //     int mid = start + (end - start) / 2;
  //     if (nums[mid] - nums[i] == target)
  //     {
  //       ans.push_back(mid);
  //       ans.push_back(i);
  //       break;
  //     }
  //     else if (target > nums[mid] - nums[i])
  //     {
  //       start = start + 1;
  //     }
  //     else
  //     {
  //       end = end - 1;
  //     }
  //   }

  // for (int j = i + 1; j < size; j++)
  // {
  //   if (nums[j] - nums[i] == target)
  //   {
  //     ans.push_back(j);
  //     ans.push_back(i);
  //   }
  // }
  // }

  // we use two pointer approach also

  int start = 0;
  int end = 1;
  while (end < size)
  {
    if (nums[end] - nums[start] == target)
    {
      // return {end, start};
      return 1;
    }
    else if (nums[end] - nums[start] < target)
    {
      end--;
    }
    else
    {
      start--;
    }
    if (start == end)
    {
      end--;
    }
  }
  return 0;
  // return ans;
}

int main()
{
  vector<int> nums = {5, 10, 3, 2, 50, 90};

  int ans = pairDiff(nums, 45);

  cout << ans;

  return 0;
}
