#include <bits/stdc++.h>
using namespace std;

int countVowels(string s)
{
  int count = 0;
  for (char c : s)
  {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
      count++;
    }
  }
  return count;
}

int main()
{
  string s = "hellooo";

  int ans = countVowels(s);

  cout << ans;

  return 0;
}
