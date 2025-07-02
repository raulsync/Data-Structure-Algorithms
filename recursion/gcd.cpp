#include <bits/stdc++.h>
using namespace std;

// euclidean theorem

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }

  return gcd(b, a % b);
}

int main()
{
  int ans = gcd(12, 39);

  cout << ans;
  return 0;
}
