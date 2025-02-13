#include <bits/stdc++.h>
using namespace std;

// for sorted array

vector<int> arrayIntersection(vector<int> arr1, int n, vector<int> arr2, int m)
{
  vector<int> ans;

  // optimize

  int i = 0;
  int j = 0;

  // optimized solution

  while (i < n && j < m)
  {
    if (arr1[i] == arr2[j])
    {
      ans.push_back(arr2[j]);
      i++;
      j++;
    }

    if (arr1[i] < arr2[j])
    {
      i++;
    }
    if (arr1[i] > arr2[j])
    {
      j++;
    }
  }

  // Brute force
  //  for (int i = 0; i < n; i++)
  //  {

  //   for (int j = 0; j < m; j++)
  //   {

  //     if (arr1[i] < arr2[j])
  //     {
  //       break;
  //     }

  //     if ((arr1[i] == arr2[j]))
  //     {

  //       ans.push_back(arr2[j]);

  //       arr2[j] = -1;
  //       break;
  //     }
  //   }
  // }

  return ans;
}

int main()
{
  vector<int> arr1{1, 2, 3, 3, 4, 5, 6, 7};
  vector<int> arr2{3, 3, 4, 4, 5, 8};

  vector<int> ans = arrayIntersection(arr1, 8, arr2, 6);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}
