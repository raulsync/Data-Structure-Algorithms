#include <bits/stdc++.h>
using namespace std;

string add(string num1, string num2)
{
  int index1 = num1.size() - 1;
  int index2 = num2.size() - 1;
  string ans;
  int carry = 0;
  int sum = 0;

  while (index2 >= 0)
  {
    // (num1[index1]-'0') this one use to conver character into integer
    sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
    carry = sum / 10;
    // convert integer to char
    char ch = ('0' + sum % 10);
    ans += ch;
    index2--;
    index1--;
  }

  // now we have to check for remaining char of num1

  while (index1 >= 0)
  {
    sum = (num1[index1] - '0') + carry;
    carry = sum / 10;
    // convert integer to char
    char ch = ('0' + sum % 10);
    ans += ch;
    index1--;
  }
  // check if carry exists then add 1 to ans
  if (carry)
  {
    ans += '1';
  }
  // now answer is coming in reverse format so we reverse the answer to get the exact value

  reverse(ans.begin(), ans.end());
  return ans;
}

string addString(string num1, string num2)
{
  if (num2.size() > num1.size())
  {
    return add(num2, num1);
  }
  else
  {
    return add(num1, num2);
  }
}

int main()
{

  string num1 = "26854";
  string num2 = "938";

  string ans = addString(num1, num2);
  cout << ans;
  return 0;
}
