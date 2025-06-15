#include <bits/stdc++.h>
using namespace std;

string sortSentence(string s)
{
  vector<string> ans(10);
  string temp = "";
  int count = 0;
  int index = 0;

  while (index < s.size())
  {
    if (s[index] == ' ')
    {
      int position = temp[temp.size() - 1] - '0';
      // int position = stoi(string(1, temp[temp.size() - 1]));
      // remove last character because it represent the position of sting not whole string
      temp.pop_back();
      ans[position] = temp;
      temp.clear();
      count++;
    }
    else
    {
      temp += s[index];
    }
    index++;
  }
  int position = temp[temp.size() - 1] - '0';
  // int position = stoi(string(1, temp[temp.size() - 1]));
  // remove last character because it represent the position of sting not whole string
  temp.pop_back();
  ans[position] = temp;
  temp.clear();
  count++;
  for (int i = 1; i <= count; i++)
  {
    temp += ans[i];
    temp += ' ';
  }
  temp.pop_back();
  return temp;
}

int main()
{

  string s = "is2 sentence4 This1 a3";
  string ans = sortSentence(s);

  cout << ans;

  return 0;
}
