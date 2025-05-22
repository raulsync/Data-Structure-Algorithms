#include <bits/stdc++.h>
using namespace std;

int searchChar(string &s, char ch)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == ch)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  string s = "geeksforgeeks";
  char ch = 'm';

  int ans = searchChar(s, ch);

  cout << ans;

  return 0;
}
