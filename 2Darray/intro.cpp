#include <bits/stdc++.h>
using namespace std;

int main()
{
  // inittalize array as row
  // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  // initializing array as where we want to specify which element goes to which row

  int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

  // 2d vector
  //  vector<vector<int>> matrix(row,vector<int>(col,elements))

  // vector<vector<int>> matrix;

  // row size
  // matrix.size();
  // column size
  //  matrix[0].size()

  // taking input

  // for (int row = 0; row < 3; row++)
  // {
  //   for (int col = 0; col < 4; col++)
  //   {
  //     cin >> arr[row][col];
  //   }
  // }

  // output as row

  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 4; col++)
    {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  // // output as col;
  // for (int col = 0; col < 4; col++)
  // {
  //   for (int row = 0; row < 3; row++)
  //   {
  //     cout << arr[row][col] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}
