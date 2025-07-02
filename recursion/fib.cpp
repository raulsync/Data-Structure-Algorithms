#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
  if (n <= 2)
  {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
}

int climbStairs(int n)
{
  if (n <= 2)
  {
    return n;
  }

  return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{

  int n = 8;
  int ans = fib(n);
  // cout << ans << endl;
  int stairs = climbStairs(n);
  cout << ans;
  return 0;
}
