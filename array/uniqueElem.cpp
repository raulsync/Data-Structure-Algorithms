#include <bits/stdc++.h>
using namespace std;

int uniqueElem(int arr[], int size)
{
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main()
{
  int arr1[5] = {2, 4, 4, 3, 1};

  int arr[7] = {1, 1, 3, 4, 5, 2, 6};

  int result = uniqueElem(arr1, 5);
  cout << result << " ";

  return 0;
}
