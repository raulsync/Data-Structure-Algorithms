#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X)
{
  sort(A + 0, A + n);
  for (int i = 0; i < n - 3; i++)
  {
    for (int j = i + 1; j < n - 2; j++)
    {
      int start = j + 1;
      int end = n - 1;
      while (start < end)
      {
        if (A[start] + A[end] + A[i] + A[j] == X)
        {
          return true;
        }
        else if (A[start] + A[end] + A[i] + A[j] > X)
        {
          end--;
        }
        else
        {
          start++;
        }
      }
    }
  }
  return false;
}

int main()
{
  int arr[6] = {1, 5, 1, 0, 6, 0};
  int target = 7;
  bool isfound = find4Numbers(arr, 6, target);
  if (isfound)
  {
    cout << "target found";
  }
  else
  {
    cout << "target not found";
  }
  return 0;
}
