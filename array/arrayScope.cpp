#include <bits/stdc++.h>
using namespace std;

void updatArrayElem(int arr[], int size)
{
  cout << "inside update function" << endl;

  arr[1] = {200};

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "going to main function " << endl;
}

int main()
{

  int arr[3] = {1, 4, 5};

  // when we passing array as arguement to function we dont actually pass the elem but the first address of that arr so when we change something in that array then changes will reflect in actual array also .
  updatArrayElem(arr, 3);

  // printArray
  cout << "inside main function " << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
