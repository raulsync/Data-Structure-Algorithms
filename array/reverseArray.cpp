#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{

  int start = 0;
  int end = size - 1;
  while (start < end)
  {
    swap(arr[start], arr[end]);

    start++;
    end--;
  }
  for (int i = 0; i < size; i++)
  {

    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{

  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[6] = {1, 2, 3, 4, 5, 6};

  reverseArray(arr1, 5);
  reverseArray(arr2, 6);

  return 0;
}
