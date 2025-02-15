#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;

  int ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}

int lastOccurence(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;

  int ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
      ans = mid;
      start = mid + 1;
    }
    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}

int main()
{

  int arr[10] = {1, 2, 2, 2, 2, 2, 2, 3, 4, 5};

  int k = 2;

  int first = firstOccurence(arr, 10, k);
  int last = lastOccurence(arr, 10, k);

  cout << "First occurence of 2 is " << first << endl;
  cout << "Last occurence of 2 is " << last << endl;

  return 0;
}
