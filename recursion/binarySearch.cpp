#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int start, int end, int target)
{
  int mid = start + (end - start) / 2;

  if (start > end)
  {
    return 0;
  }

  if (arr[mid] == target)
  {
    return mid;
  }

  if (target < arr[mid])
  {
    return binarySearch(arr, start, mid - 1, target);
  }
  else
  {
    return binarySearch(arr, mid + 1, end, target);
  }
}
int main()
{
  int arr[] = {2, 3, 5, 7, 9};

  int ans = binarySearch(arr, 0, 4, 5);
  cout << ans;
  return 0;
}
