#include <bits/stdc++.h>
using namespace std;

void lowerUpperCase(string &s, int index)
{
  if (index > s.size() - 1)
  {
    return;
  }

  s[index] = 'A' + s[index] - 'a';

  lowerUpperCase(s, index + 1);
}

int main()
{
  string s = "rahulanand";
  lowerUpperCase(s, 0);
  cout << s;
  return 0;
}
