#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size)
{

  // We go up to (size - 1) in the outer loop because after each pass, the largest element gets placed at the end.
  // In the inner loop, we stop at (size - i - 1) because we compare arr[j] and arr[j+1]. If we go till the last index, arr[j+1] would be out of bounds.
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[6] = {2, 4, 9, 7, 5, 1};

  bubbleSort(arr, 6);

  return 0;
}
