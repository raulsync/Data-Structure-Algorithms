#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
  // brute force

  vector<int> ans;

  // for (int i = 0; i < numbers.size() - 1; i++)
  // {
  //   for (int j = i + 1; j < numbers.size(); j++)
  //   {
  //     if (numbers[i] + numbers[j] == target)
  //     {
  //       // return index
  //       ans.push_back(i);
  //       ans.push_back(j);
  //     }
  //   }
  // }

  // Binary Search approach
  // it only apply when array is sorted

  // for (int i = 0; i < numbers.size() - 1; i++)
  // {

  //   int start = i + 1;
  //   int end = numbers.size() - 1;

  //   while (start <= end)
  //   {

  //     int mid = start + (end - start) / 2;
  //     if (numbers[mid] == (target - numbers[i]))
  //     {
  //       return {i, mid};
  //     }
  //     else if (numbers[mid] > (target - numbers[i]))
  //     {
  //       end = mid - 1;
  //     }
  //     else
  //     {
  //       start = mid + 1;
  //     }
  //   }
  // }

  int start = 0;
  int end = numbers.size() - 1;

  while (start < end)
  {
    if (numbers[start] + numbers[end] == target)
    {
      return {start, end};
    }
    else if (numbers[start] + numbers[end] > target)
    {
      end--;
    }
    else
    {
      start++;
    }
  }

  return {};
}

int main()
{

  vector<int> number = {2, 7, 11, 15, 27};
  int target = 22;
  vector<int> ans = twoSum(number, target);

  cout << ans[0] << " " << ans[1] << " ";

  return 0;
}
