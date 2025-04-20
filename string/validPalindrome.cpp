#include <bits/stdc++.h>
using namespace std;

bool isAlphnum(char ch)
{
  if ((ch >= '0' && ch <= '9') ||
      (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
  {
    return true;
  }
  return false;
}

bool isPalindrome(string s)
{
  int start = 0;
  int end = s.size() - 1;

  while (start <= end)
  {
    if (!isAlphnum(s[start]))
    {
      start++;
      continue;
    }
    if (!isAlphnum(s[end]))
    {
      end--;
      continue;
    }

    if (tolower(s[start]) != tolower(s[end]))
    {
      return false;
    }
    start++;
    end--;
  }
  return true;
}

int main()
{

  string str = "A man, a plan, a canal: Panama";

  bool isValidPalindrome = isPalindrome(str);

  if (isValidPalindrome)
  {
    cout << str << " is valid palindrome";
  }
  else
  {
    cout << str << " is not a valid palindrome";
  }

  return 0;
}
