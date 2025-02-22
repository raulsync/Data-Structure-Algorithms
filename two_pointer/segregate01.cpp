#include <bits/stdc++.h>
using namespace std;

void sort01(vector<int> &arr)
{

  // int count0 = 0;
  // int count1 = 0;

  // for (int i = 0; i < arr.size(); i++)
  // {
  //   if (arr[i] == 0)
  //   {
  //     count0++;
  //   }
  //   else
  //   {
  //     count1++;
  //   }
  // }

  // for (int j = 0; j < count0; j++)
  // {
  //   arr[j] = 0;
  // }

  // for (int k = count0; k < arr.size(); k++)
  // {
  //   arr[k] = 1;
  // }

  // we can do this using two pointer also

  int start = 0;
  int end = arr.size() - 1;

  while (start < end)
  {
    if (arr[start] == 0)
    {
      start++;
    }
    else if (arr[end] == 1)
    {
      end--;
    }
    else
    {
      swap(arr[start], arr[end]);
      start++;
      end--;
    }
  }

  // printing array
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  vector<int> v = {0, 0, 0, 1, 0};
  sort01(v);

  return 0;
}
