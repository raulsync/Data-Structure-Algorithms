#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
  for (int i = 0; i <= m; i++)
  {
    cout << arr[i] << " ";
  }

  int left = m + 1;
  int right = arr.size() - 1;

  while (left <= right)
  {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }

  for (int j = m + 1; j < arr.size(); j++)
  {
    cout << arr[j] << " ";
  }
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  int m = 2;
  reverseArray(arr, m);
  return 0;
}
