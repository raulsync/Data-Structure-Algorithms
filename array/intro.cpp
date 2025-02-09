#include <bits/stdc++.h>
using namespace std;

void printArray(char arr[], int size)
{

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{

  // initialization
  int arr[5] = {1};

  // printArray(arr, 5);
  char ch[5] = {'a', 'b', 'c'};

  printArray(ch, 5);

  // accessing array
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  return 0;
}
