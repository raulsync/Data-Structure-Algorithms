#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &matrix)
{
  int row = matrix.size();
  int col = matrix[0].size();
  int top = 0;
  int right = col - 1;
  int bottom = row - 1;
  int left = 0;

  vector<int> ans;

  while (top <= bottom && left <= right)
  {

    // left to right

    for (int i = left; i <= right; i++)
    {
      ans.push_back(matrix[top][i]);
    }
    top++;

    // top to bottom

    for (int i = top; i <= bottom; i++)
    {
      ans.push_back(matrix[i][right]);
    }
    right--;
    // Right to Left
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
      {
        ans.push_back(matrix[bottom][i]);
      }
      bottom--;
    }

    // Bottom to Top
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
      {
        ans.push_back(matrix[i][left]);
      }
      left++;
    }
  }
  return ans;
}

int main()
{

  vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  vector<int> ans = spiralMatrix(matrix);

  for (int num : ans)
  {
    cout << num << " ";
  }
  return 0;
}
