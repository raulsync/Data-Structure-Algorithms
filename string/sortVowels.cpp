#include <bits/stdc++.h>
using namespace std;

string sortVowels(string s)
{
  int size = s.size();

  // freq of upper and lower vowels char
  vector<int> lower(26, 0);
  vector<int> upper(26, 0);

  for (int i = 0; i < size; i++)
  {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
      lower[s[i] - 'a']++;
      s[i] = '#';
    }
    else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
      upper[s[i] - 'A']++;
      s[i] = '#';
    }
  }

  // sort the string based on upper and lower

  string ans;
  // upper case
  for (int i = 0; i < 26; i++)
  {
    char ch = 'A' + i;
    while (upper[i])
    {
      ans += ch;
      upper[i]--;
    }
  }

  // lower case

  for (int i = 0; i < 26; i++)
  {
    char ch = 'a' + i;
    while (lower[i])
    {
      ans += ch;
      lower[i]--;
    }
  }

  // now assigning value of lower upper to their right position
  int first = 0;
  int second = 0;

  while (second < ans.size())
  {
    if (s[first] == '#')
    {
      s[first] = ans[second];
      second++;
    }
    first++;
  }
  return s;
}

int main()
{

  string s = "leEtcOde";
  string ans = sortVowels(s);
  cout << ans;

  return 0;
}
