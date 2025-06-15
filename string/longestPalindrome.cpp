#include <bits/stdc++.h>
using namespace std;

int getLongestPalindrome(string s)
{
  vector<int> lower(26, 0);
  vector<int> upper(26, 0);
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= 'a')
    {
      // add freq count of lower letters
      lower[s[i] - 'a']++;
    }
    else
    {
      // add freq of upper character
      upper[s[i] - 'A']++;
    }
  }

  int count = 0; // to store the result
  bool odd = 0;  // check the odd freq present or not if there is odd present then we add 1 to the count
  for (int i = 0; i < 26; i++)
  {
    // for even freq we add all to the count if there is any odd freq then we have to add by doing subtracting by 1
    if (lower[i] % 2 == 0)
    {
      count += lower[i];
    }
    else
    {
      count += lower[i] - 1;
      odd = 1;
    }
    if (upper[i] % 2 == 0)
    {
      count += upper[i];
    }
    else
    {
      count += upper[i] - 1;
      odd = 1;
    }
  }
  return count + odd;
}

int main()
{
  string s = "abccccdd";
  int ans = getLongestPalindrome(s);
  cout << ans;
  return 0;
}
