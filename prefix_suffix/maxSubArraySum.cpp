#include <bits/stdc++.h>
using namespace std;

int maxSubSum(vector<int> &v)
{
  int maximum = INT_MIN;
  int prefixSum = 0;

  // brute force Approach

  for (int i = 0; i < v.size(); i++)
  {
    prefixSum += v[i];
    maximum = max(prefixSum, maximum);
    // for (int j = i; j < v.size(); j++)
    // {
    //   /*
    //   {0->n},
    //   {1.n},
    //   {2,n},
    //   {n,n}
    //   */
    //   prefixSum += v[j];
    //   maximum = max(prefixSum, maximum);
    // }

    // kadane's algorithm rule whenever we get negative number in that case  index of that prefix sum be zero it is only applicable when we have negative element given in array .
    // in kadane's algorithm we mainatin running sum whenever that sum is negative then we assign 0

    if (prefixSum < 0)
    {
      prefixSum = 0;
    }
  }

  return maximum;
}

int main()
{
  vector<int> v = {2, -5, 7, -9, 10};

  int ans = maxSubSum(v);
  cout << ans;

  return 0;
}
