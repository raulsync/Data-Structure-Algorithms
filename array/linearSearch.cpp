#include <bits/stdc++.h>
using namespace std;
void linearSearch(int arr[], int size, int target)
{
  // check target is present on which index
  bool search = false;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      cout << "target at " << i << " index" << endl;
      search = true;
      break;
    }
  }

  if (!search)
  {
    cout << "Target Not found" << endl;
  }
}
int main()
{

  int size;
  cin >> size;

  int arr[100];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int target;
  cin >> target;

  linearSearch(arr, size, target);
  return 0;
}
