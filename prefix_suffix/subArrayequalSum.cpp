#include <bits/stdc++.h>
using namespace std;

bool hasSubSumPartition(vector<int> &v)
{
  int size = v.size();

  int totalSum = 0;

  // brute force O(n^2)

  // for (int i = 1; i < size; i++)
  // {
  //   int sum1 = 0, sum2 = 0;
  //   for (int j = 0; j <= i; j++)
  //   {
  //     sum1 += v[j];
  //   }
  //   for (int j = i + 1; j < size; j++)
  //   {
  //     sum2 += v[j];
  //   }
  //   if (sum1 == sum2)
  //   {
  //     return 1;
  //   }
  // }

  // first we find total sum
  for (int i = 0; i < size; i++)
  {
    totalSum += v[i];
  }
  // By using prefix sum
  int prefix = 0;
  for (int i = 0; i < size; i++)
  {
    prefix += v[i];
    int ans = totalSum - prefix;
    if (ans == prefix)
    {
      return true;
    }
  }

  return false;
}

int main()
{
  vector<int> v = {3, 4, -2, 5, 8, 20, -10, 8};

  cout << hasSubSumPartition(v);
  return 0;
}
