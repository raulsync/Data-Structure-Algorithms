#include <bits/stdc++.h>
using namespace std;

void waveForm(vector<vector<int>> &arr)
{

  int row = arr.size();
  int col = arr[0].size();

  for (int j = 0; j < col; j++)
  {

    if (j % 2 == 0)
    // Even column top to bottom
    {
      for (int i = 0; i < row; i++)
      {
        cout << arr[i][j] << " ";
      }
    }
    else
    // Odd column bottom to top
    {
      for (int i = row - 1; i >= 0; i--)
      {
        cout << arr[i][j] << " ";
      }
    }
  }
}

int main()
{

  vector<vector<int>> v = {
      {3, 6, 4, 2},
      {7, 8, 11, 5},
      {9, 3, 2, 1},
      {17, 8, 5, 9}};
  waveForm(v);
  return 0;
}
