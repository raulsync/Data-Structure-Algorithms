#include <bits/stdc++.h>
using namespace std;

bool pairProduct(vector<int> &arr, long long target)
{
  // brute force approach
  int size = arr.size();
  sort(arr.begin(), arr.end());
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = i + 1; j < size; j++)
  //   {
  //     if (arr[i] * arr[j] == target)
  //     {
  //       return true;
  //     }
  //   }
  // }

  // we can use two pointer approach here
  int start = 0;
  int end = size - 1;
  while (start < end)
  {
    if (arr[start] * arr[end] == target)
    {
      return true;
    }
    else if (arr[start] * arr[end] < target)
    {
      start++;
    }
    else
    {
      end--;
    }
  }
  return false;
}

int main()
{
  // vector<int> arr = {10, 20, 9, 30, 40};
  vector<int> arr = {10, 20, 9, -40};
  bool isPairProduct = pairProduct(arr, 30);
  if (isPairProduct)
  {
    cout << "Pair product present";
  }
  else
  {
    cout << "Pair product doesn't present";
  }
  return 0;
}
