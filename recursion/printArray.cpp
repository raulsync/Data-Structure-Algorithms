

#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int index)
{
  if (index == -1)
  {
    return 0;
  }

  return arr[index] + sumOfArray(arr, index - 1);
}

void printArray(int arr[], int size, int index)
{

  if (index == size)
  {
    return;
  }

  // cout << arr[index] << " ";
  // printArray(arr, size, index + 1);

  // if we have to print in reverse order then we have to first call the recursive function then printing it
  printArray(arr, size, index + 1);
  cout << arr[index] << " ";
}
// scond way

void print(int arr[], int index)
{
  if (index == -1)
  {
    return;
  }

  cout << arr[index] << " ";
  print(arr, index - 1);
}

int main()
{

  int arr[] = {1, 3, 5, 6, 8};

  // printArray(arr, 5, 0);
  // print(arr, 4);

  int ans = sumOfArray(arr, 4);
  cout << ans;

  return 0;
}
