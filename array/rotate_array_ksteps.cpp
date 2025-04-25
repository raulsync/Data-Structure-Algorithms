#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
  int size = nums.size();

  for (int i = k + 1; i < size; i++)
  {
    cout << nums[i] << " ";
  }
  // 5,6,7
  for (int i = 0; i <= k; i++)
  {
    cout << nums[i] << " ";
  }
  // 1, 2 , 3,4
}

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; // 5,6,7,1,2,3,4
  int k = 3;
  rotate(nums, k);
  return 0;
}
