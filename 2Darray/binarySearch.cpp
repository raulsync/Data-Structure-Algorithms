#include <bits/stdc++.h>
using namespace std;

bool searchElem(vector<vector<int>> &matrix, int m, int n, int target)
{
  // first one linear search brute force
  // second approach is to traverse on every row and apply binary search
  // third one is direct apply bs on 2Darray as 2d array stored as 1d array in memory so we can apply this

  // for (int i = 0; i < m; i++)
  // {
  //   if (matrix[i][0] <= target && matrix[i][n - 1] >= target)
  //   {
  //     // apply binary search
  //     int start = 0;
  //     int end = n - 1;
  //     while (start <= end)
  //     {
  //       int mid = start + (end - start) / 2;
  //       if (matrix[i][mid] == target)
  //       {
  //         return 1;
  //       }
  //       else if (matrix[i][mid] > target)
  //       {
  //         end = mid - 1;
  //       }
  //       else
  //       {
  //         start = mid + 1;
  //       }
  //     }
  //   }
  // }

  // 2nd way to do this we use direct

  int start = 0;
  int end = (n * m) - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    int rowIndex = mid / n;
    int colIndex = mid % n;

    if (matrix[rowIndex][colIndex] == target)
    {
      return 1;
    }
    else if (matrix[rowIndex][colIndex] > target)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  return 0;
}

int main()
{

  vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

  int row = matrix.size();
  int col = matrix[0].size();
  int target = 34;
  bool isElemPresent = searchElem(matrix, row, col, target);

  if (isElemPresent)
  {
    cout << "element present in array";
  }
  else
  {
    cout << "element doesnot present";
  }

  return 0;
}
