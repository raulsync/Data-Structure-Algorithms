#include <bits/stdc++.h>
using namespace std;

int countWords(string s)
{
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ')
    {
      count++;
    }
  }
  return count + 1;
}

int main()
{

  string s = "hello world this is wiki";
  int ans = countWords(s);
  cout << ans;
  return 0;
}
