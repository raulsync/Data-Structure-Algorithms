#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
  int size = nums.size();
  // we suppose initially that our array size is ans
  int ans = size;
  sort(nums.begin(), nums.end());
  for (int i = 0; i < size; i++)
  {
    if (nums[i] != i)
    {
      ans = i;
      break;
      // after we assign then aage check krne ki jarurat nahi hai
    }
  }
  return ans;
}

int main()
{
  vector<int> nums = {3, 0, 1};

  int ans = missingNumber(nums);

  cout << ans;

  return 0;
}
