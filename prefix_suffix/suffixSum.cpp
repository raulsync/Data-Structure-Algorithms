#include <bits/stdc++.h>
using namespace std;

vector<int> suffixSum(vector<int> &arr)
{
  int size = arr.size();
  vector<int> ans(size);

  ans.back() = arr.back();

  for (int i = size - 1; i >= 0; i--)
  {
    ans[i] = ans[i + 1] + arr[i];
  }
  return ans;
}

void printArray(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{

  vector<int> v = {3, 5, 8, 10, 2};

  vector<int> result = suffixSum(v);
  printArray(result);
  return 0;
}
