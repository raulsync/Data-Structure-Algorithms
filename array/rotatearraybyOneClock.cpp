#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr)
{
  // code here
  int size = arr.size();
  int lastElem = arr[size - 1];
  for (int i = size - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = lastElem;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  rotate(arr);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
