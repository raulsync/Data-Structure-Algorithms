#include <bits/stdc++.h>
using namespace std;

void rotateMatrix90antiClock(vector<vector<int>> &matrix)
{
  int n = matrix.size();

  // transpose of matrix
  for (int i = 0; i < n; i++)
  {
    // swap only when j>i ,swap with only upper diagonal from lower diagonal
    for (int j = i + 1; j < n; j++)
    {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
  for (int k = 0; k < n; k++)
  {
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
      swap(matrix[start][k], matrix[end][k]);
      start++;
      end--;
    }
  }
}

int main()
{
  vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  rotateMatrix90antiClock(mat);

  for (int i = 0; i < mat.size(); i++)
  {
    for (int j = 0; j < mat.size(); j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
