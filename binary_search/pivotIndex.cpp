#include <bits/stdc++.h>
using namespace std;

int pivotIndex(int arr[], int n)
{

  int start = 0;
  int end = n - 1;

  while (start < end)
  {
    int mid = start + (end - start) / 2;
    // If the middle element is greater than the last element,
    if (arr[mid] >= arr[end])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
  }
  return start;
}

int main()
{

  int arr[7] = {4, 5, 6, 7, 0, 1, 2};

  int ans = pivotIndex(arr, 7);

  cout << "Pivot index is " << ans;

  return 0;
}
