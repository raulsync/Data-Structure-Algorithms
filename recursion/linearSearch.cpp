
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int target, int index, int size)
{
  // base condition
  if (index == size)
  {
    return 0;
  }

  if (arr[index] == target)
  {
    return 1;
  }

  return linearSearch(arr, target, index + 1, size);
}

int main()
{
  int arr[] = {1, 2, 5, 8, 9};
  bool isPresent = linearSearch(arr, 3, 0, 5);
  if (isPresent)
  {
    cout << "target is present";
  }
  else
  {
    cout << "not present";
  }
  return 0;
}
