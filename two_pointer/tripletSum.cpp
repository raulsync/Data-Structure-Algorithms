#include <bits/stdc++.h>
using namespace std;

bool hasTripletSum(vector<int> &arr, int target)
{
  // Your Code Here
  // brute force O(n^3)
  // for (int i = 0; i < arr.size() - 1; i++)
  // {
  //   for (int j = i + 1; j < arr.size() - 2; j++)
  //   {
  //     for (int k = j + 1; k < arr.size(); k++)
  //     {
  //       if (arr[i] + arr[j] + arr[k] == target)
  //       {
  //         return true;
  //       }
  //     }
  //   }
  // }
  // sort the arrray
  sort(arr.begin(), arr.end());
  // by using two pointer
  for (int i = 0; i < arr.size() - 2; i++)
  {
    int start = i + 1;
    int end = arr.size() - 1;
    while (start < end)
    {
      if (arr[i] + arr[start] + arr[end] == target)
      {
        return true;
      }
      else if (arr[i] + arr[start] + arr[end] > target)
      {
        end--;
      }
      else
      {
        start++;
      }
    }
  }

  return false;
}

int main()
{
  vector<int> v = {1, 4, 45, 6, 10, 8};
  int x = 13;
  bool isTripletSum = hasTripletSum(v, x);

  if (isTripletSum)
  {
    cout << "targetsum is present";
  }
  else
  {
    cout << "targetsum is not present";
  }
  return 0;
}
