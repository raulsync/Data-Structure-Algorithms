#include <bits/stdc++.h>
using namespace std;

string insertChars(string s, int position, char ch)
{
  // using builtin method
  // s.insert(s.begin() + position, ch);
  string res = "";

  for (int i = 0; i < s.size(); i++)
  {
    if (i == position)
    {
      res.push_back(ch);
    }
    res.push_back(s[i]);
  }

  if (position >= s.size())
  {
    return res;
  }

  // s.resize(s.size() + 1);
  return res;
}

int main()
{
  string str = "geeks";
  int pos = 2;
  char ch = 'A';
  string result = insertChars(str, 2, ch);
  cout << result;

  return 0;
}
