#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size)
{
  for (int i = 1; i < size; i++)
  {

    int minKey = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > minKey)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = minKey;
  }

  for (int k = 0; k < size; k++)
  {
    cout << arr[k] << " ";
  }
}

int main()
{
  int arr[5] = {5, 2, 4, 6, 1};

  insertionSort(arr, 5);

  return 0;
}
