#include <bits/stdc++.h>
using namespace std;
/*

// why we pass col in arr[][col] because 2d array stored in row major order so when we pass 2d array compiler does not know the number of columns so we specify when we pass array as parameter so that compiler calculates the memory index.

the compiler calculates the memory index using:
Address=Base Address+(i×cols+j)×sizeof(int)
*/
void linearSearch(int arr[][4], int rows, int cols, int target)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (arr[i][j] == target)
      {
        cout << "Element found at index: (" << i << ", " << j << ")\n";
        return;
      }
    }
  }
  cout << "Element not found\n";
}

int main()
{
  int arr[3][4] = {2, 3, 4, 5, 6, 7, 9, 10, 34, 12, 11, 30};
  int target = 7;
  linearSearch(arr, 3, 4, target);

  return 0;
}
