#include <bits/stdc++.h>
using namespace std;

void swapAlt(int arr[], int size)
{
  // int i = 0;
  // int j = 1;

  // while (j < size)
  // {
  //   swap(arr[i], arr[j]);
  //   i = i + 2;
  //   j = j + 2;
  // }

  // we do this with second method also by using loop
  for (int i = 0; i < size; i += 2)
  {
    if (i + 1 < size)
    {
      swap(arr[i], arr[i + 1]);
    }
  }

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{

  int arr1[5] = {2, 3, 5, 6, 7};

  int arr2[6] = {4, 5, 6, 7, 8, 9};

  swapAlt(arr1, 5);
  swapAlt(arr2, 6);

  return 0;
}
