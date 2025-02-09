#include <bits/stdc++.h>
using namespace std;

void printArraySum(int arr[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  cout << "sum of array's element is " << sum << endl;
}

int main()
{

  int size;

  cout << "Enter size of array" << endl;
  cin >> size;

  int arr[100];
  cout << "enter elements of array " << endl;

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  printArraySum(arr, size);

  return 0;
}
