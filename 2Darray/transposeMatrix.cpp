#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &mat, int n)
{
  for (int i = 0; i < n; i++)
  {
    // swap only when j>i ,swap with only upper diagonal from lower diagonal
    for (int j = i + 1; j < n; j++)
    {
      swap(mat[i][j], mat[j][i]);
    }
  }
}

int main()
{
  vector<vector<int>> matrix = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};

  transpose(matrix, 4);

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
