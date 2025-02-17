#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size)
{

  for (int i = 0; i < size; i++)
  {
    int min = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
    }
    swap(arr[min], arr[i]);
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{

  int arr[5] = {2, 4, 3, 5, 1};

  selectionSort(arr, 5);

  return 0;
}

/*
When to use this :-
when we have small dataset.

where few swap needed to sort.


*/
