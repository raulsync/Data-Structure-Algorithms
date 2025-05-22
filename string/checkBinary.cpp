#include <bits/stdc++.h>
using namespace std;

bool isBinary(string &s)
{
  // Your code here
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != '0' && s[i] != '1')
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s = "101";

  bool checkBinary = isBinary(s);
  if (checkBinary)
  {
    cout << "True";
  }
  else
  {
    cout << "False";
  }

  return 0;
}
