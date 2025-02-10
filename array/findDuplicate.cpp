#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int size)
{

  // brute force O(n^2)

  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = i + 1; j < size; j++)
  //   {
  //     if (arr[i] == arr[j])
  //     {
  //       return arr[i];
  //     }
  //   }
  // }

  // time complexity of this O(nlogn)

  int ans = 0;

  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }

  for (int i = 1; i < size; i++)
  {
    ans = ans ^ i;
  }

  return ans;
}

int main()
{
  int arr1[5] = {1, 3, 4, 2, 2};

  int arr[7] = {1, 2, 3, 5, 4, 6, 6};

  int ans = findDuplicate(arr1, 5);

  cout << ans << " ";
  return 0;
}
