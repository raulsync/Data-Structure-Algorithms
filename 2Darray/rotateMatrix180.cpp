#include <bits/stdc++.h>
using namespace std;

// void rotateMatrix(vector<vector<int>> &mat)
// {
//   // this is brute force O(n^2);

//   // first we transpose the matrix then reverse row wise two times

//   int n = mat.size();
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       swap(mat[i][j], mat[j][i]);
//     }
//   }

//   // now reverse the row
//   for (int k = 0; k < n; k++)
//   {
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//       swap(mat[k][start], mat[k][end]);
//       start++;
//       end--;
//     }
//   }

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       swap(mat[i][j], mat[j][i]);
//     }
//   }

//   // now reverse the row
//   for (int k = 0; k < n; k++)
//   {
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//       swap(mat[k][start], mat[k][end]);
//       start++;
//       end--;
//     }
//   }
// }

// 2nd way
void rotateMatrix(vector<vector<int>> &mat)
{

  int n = mat.size();

  // first time reverse column wise
  for (int k = 0; k < n; k++)
  {
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
      swap(mat[start][k], mat[end][k]);
      start++;
      end--;
    }
  }
  // now reverse the row
  for (int k = 0; k < n; k++)
  {
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
      swap(mat[k][start], mat[k][end]);
      start++;
      end--;
    }
  }
}

int main()
{

  vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  rotateMatrix(mat);

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
