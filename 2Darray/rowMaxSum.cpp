#include <bits/stdc++.h>
using namespace std;

int rowMaxSum(int arr[][4], int row, int col)
{

  int sum = INT_MIN; // assume that sum is min
  int index = -1;

  for (int i = 0; i < row; i++)
  {
    int totalSum = 0;
    for (int j = 0; j < col; j++)
    {
      totalSum += arr[i][j];
    }
    if (sum < totalSum)
    {
      sum = totalSum;
      index = i;
    }
  }
  return index;
}

int main()
{
  int arr[5][4] = {{3, 4, 7, 1}, {2, 8, 3, 9}, {5, 4, 2, 2}, {7, 3, 0, 8}, {2, 8, 9, 9}};
  int ans = rowMaxSum(arr, 5, 4);

  cout << ans;

  return 0;
}
