#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s)
{
  int start = 0;
  int end = s.size() - 1;
  while (start < end)
  {
    swap(s[start], s[end]);
    start++;
    end--;
  }
}

bool checkPalindrome(string &s)
{
  int start = 0;
  int end = s.size() - 1;
  while (start < end)
  {
    if (s[start] != s[end])
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

  // single character
  char ch = 'A';
  cout << int(ch) << endl; // this prints the ascii value of A

  // c style string array of characters

  // it terminates with null character it acts as a end of string
  char str1[] = "World !";

  cout << str1[0] << endl;

  string str = "Hello";
  int length = str.length();
  cout << str[0] << endl;
  cout << length << endl;

  // operation on string
  string s1 = "Hi", s2 = "hello";
  s1.push_back('a');
  s1.pop_back();
  cout << "concat of string " << s1 + s2 << endl;

  // taking input

  // string str2;
  // cin >> str2; // cin doesnot take after hiting space ,tab or enter

  // we take input in another way which take input as a para

  // getline(cin, str2);
  // cout << str2 << endl;
  // cout << "str 2 " << str2.length()<<endl;
  // cout << str2.size()<<endl;

  // string is implemented same as vector of char like it dynamic character of arrays
  // so we have same method as vector and also string provide some extra method like substr, concatination

  vector<char> v = {'h', 'e', 'l', 'l', 'o'};

  string s = "sahaj";
  s.insert(2, "Inserted");
  // s.assign("kumaar");

  cout << s << endl;

  cout << s.max_size() << endl; // return large number
  // s.resize(9, 'X');

  // for (char c : v)
  // {
  //   cout << c << " ";
  // }
  // cout << endl;
  // for (char c : s)
  // {
  //   cout << c << " ";
  // }
  string weather = "rainy";
  cout << "weather is \"" << weather << "\"" << endl;

  // reverse string
  string name = "rahul";
  reverseString(name);

  cout << name << endl;

  string p = "namani";

  bool isPalindrome = checkPalindrome(p);

  if (isPalindrome)
  {
    cout << " string is palindrome";
  }
  else
  {
    cout << "string is not a palindrome";
  }

  return 0;
}
