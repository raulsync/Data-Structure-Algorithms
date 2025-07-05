#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int start, int end)
{
  if (start >= end)
  {
    return;
  }

  // swap start and end element

  // char ch = str[start];
  // str[start] = str[end];
  // str[end] = ch;

  swap(str[start], str[end]);
  // recursive call

  reverseString(str, start + 1, end - 1);
}

int main()
{
  string s = "rahul";
  reverseString(s, 0, s.size() - 1);
  cout << s;
  return 0;
}
