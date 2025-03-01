#include <bits/stdc++.h>
using namespace std;

pair<int, int> diagonalSum(int arr[][3], int row, int col)
{
  int sum1 = 0;
  int sum2 = 0;

  // for 00 11 22
  for (int i = 0; i < row; i++)
  {
    sum1 += arr[i][i];
  }

  int i = 0;
  int j = col - 1;
  while (j >= 0)
  {
    sum2 += arr[i][j];
    i++;
    j--;
  }

  return {sum1, sum2};
}

int main()
{
  int arr[3][3] = {{1, 2, 4}, {5, 6, 7}, {8, 9, 10}};
  pair<int, int> ans = diagonalSum(arr, 3, 3);

  cout << ans.first << " " << ans.second;

  return 0;
}
