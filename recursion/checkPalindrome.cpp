#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s, int start, int end)
{
  // base condition
  if (start >= end)
  {
    return 1;
  }

  // incduction

  if (s[start] != s[end])
  {
    return 0;
  }

  return checkPalindrome(s, start + 1, end - 1);
}

int main()
{
  string str = "abhi";
  int start = 0;
  int end = str.size() - 1;
  bool isPalindrome = checkPalindrome(str, 0, end);
  if (isPalindrome)
  {
    cout << str << " is palindrome";
  }
  else
  {
    cout << str << " is not palindrome";
  }
  return 0;
}
