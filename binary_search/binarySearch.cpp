#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
  int start = 0;
  int end = size - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (target > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int arr[5] = {2, 3, 4, 5, 6};
  int target = 5;
  int ans = binarySearch(arr, 5, target);

  cout << ans << " ";

  return 0;
}
