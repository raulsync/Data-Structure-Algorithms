#include <bits/stdc++.h>
using namespace std;

void add(int arr1[][4], int arr2[][4], int row, int col)
{
  int ans[3][4];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      // ans[i][j] = arr1[i][j] + arr2[i][j];
      // for sub
      ans[i][j] = arr2[i][j] - arr1[i][j];
    }
  }

  // print sum of array
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 5, 6, 3, 1, 23};
  int arr2[3][4] = {2, 3, 55, 6, 2, 1, 5, 7, 8, 3, 22, 3};

  add(arr1, arr2, 3, 4);
  return 0;
}
