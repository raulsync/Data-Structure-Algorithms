#include <bits/stdc++.h>
using namespace std;

void rotateClockWise(string &s)
{
  char c = s[s.size() - 1];
  // we rotate by 1 place so we start  iterating from second end elem because we put last element in char and we put this element as first element
  int index = s.size() - 2;

  while (index >= 0)
  {
    s[index + 1] = s[index];
    index--;
  }
  // at last we assign last character to index 0
  s[0] = c;
}

void rotateAntiClockWise(string &str)
{
  char c = str[0];
  int index = 1;
  while (index <= str.size() - 1)
  {
    str[index - 1] = str[index];
    index++;
  }
  str[str.size() - 1] = c;
}

bool isRotated(string str1, string str2)
{
  if (str1.size() != str2.size())
  {
    return false;
  }

  string clockwise, antiClockwise;
  clockwise = str1;
  antiClockwise = str1;
  rotateClockWise(clockwise);
  rotateClockWise(clockwise);

  rotateAntiClockWise(antiClockwise);
  rotateAntiClockWise(antiClockwise);

  if (antiClockwise == str2 || clockwise == str2)
  {
    return true;
  }

  return false;
}

int main()
{
  string a = "amazon", b = "azonam";

  bool isRotatedByTwo = isRotated(a, b);

  if (isRotatedByTwo)
  {
    cout << a << " is rotated";
  }
  else
  {
    cout << a << " is not rotated";
  }

  return 0;
}
