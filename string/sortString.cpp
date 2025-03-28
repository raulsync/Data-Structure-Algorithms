#include <bits/stdc++.h>
using namespace std;
string sortStr(string s)
{
  // we use here counting sort algorithm
  //  first initialize a vector of size 26 initilly  all set to 0.
  vector<int> freq(26, 0);
  // now increase by 1 when we see the character of that position like if we see a in string ther we increase their freq by 1
  for (int i = 0; i < s.size(); i++)
  {
    freq[s[i] - 'a']++;
  }

  string ans = "";
  for (int i = 0; i < 26; i++)
  {
    char ch = 'a' + i; // Convert character to index and increase its count.
    while (freq[i])
    {
      ans += ch;
      freq[i]--;
    }
  }
  return ans;
}
int main()
{
  string str = "acdbcf";
  cout << sortStr(str) << endl;
  return 0;
}
