#include <bits/stdc++.h>
using namespace std;

// Brute Force

// vector<vector<int>> rotateMat90(vector<vector<int>> &mat)
// {
//   int row = mat.size();
//   int col = mat[0].size();
//   vector<vector<int>> matrix(row, vector<int>(col));

//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < col; j++)
//     {
//       matrix[i][col - 1 - j] = mat[j][i];
//     }
//   }
//   return matrix;
// }

void rotateMat90(vector<vector<int>> &matrix)
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

  // now reverse the row

  for (int i = 0; i < n; i++)
  {
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
      swap(matrix[i][start], matrix[i][end]);
      start++;
      end--;
    }
  }
}

int main()
{

  vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  rotateMat90(mat);

  int col = mat[0].size();
  for (int i = 0; i < mat.size(); i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
