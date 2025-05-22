#include <bits/stdc++.h>
using namespace std;

string removeChar(string s, int position)
{
  if (position < 0 || position >= s.length())
  {
    return s;
  }
  // s.erase(position, 1);

  // we can do this without inbuilt method

  for (int i = position; i < s.size() - 1; i++)
  {
    s[i] = s[i + 1];
  }
  // resize the string  or use pop_back()
  s.resize(s.length() - 1);
  return s;
}

int main()
{
  string str = "abcde";
  int pos = 1;

  string ans = removeChar(str, pos);

  cout << ans;

  return 0;
}
