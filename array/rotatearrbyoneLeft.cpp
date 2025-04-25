#include <bits/stdc++.h>
using namespace std;

void rotateArrayByOne(vector<int> &nums)
{

  int size = nums.size();
  int firstElem = nums[0];
  for (int i = 0; i < size - 1; i++)
  {
    nums[i] = nums[i + 1];
  }
  nums[size - 1] = firstElem;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5};
  rotateArrayByOne(nums);
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  return 0;
}
