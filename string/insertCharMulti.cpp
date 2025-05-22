#include <bits/stdc++.h>
using namespace std;

string inserChars(string s, vector<int> &stars)
{
  for (int i = 0; i < stars.size(); i++)
  {
    s[stars[i]] = '*';
  }
  return s;
}

int main()
{
  string str = "geekforgeeks";
  vector<int> stars = {1, 5, 7, 9};
  string s = inserChars(str, stars);
  cout << s;
  return 0;
}
