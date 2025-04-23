#include <bits/stdc++.h>
using namespace std;

string removeOccurence(string s, string part)
{
  int length = s.length();
  int partLen = part.length();
  while (length > 0 && s.find(part) < length)
  {
    s.erase(s.find(part), partLen);
  }
  return s;
}

int main()
{
  string s = "daabcbaabcbc";
  string part = "abc";
  string ans = removeOccurence(s, part);
  cout << ans;
  return 0;
}
