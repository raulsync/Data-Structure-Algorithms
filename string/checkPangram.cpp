#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence)
{

  vector<bool> v(26, 0);
  // now we iterate over the sentence and mark that char in vector with 1
  for (int i = 0; i < sentence.size(); i++)
  {
    int index = sentence[i] - 'a'; // it gives the index of character by subtracting with ascii value means if a come then 97-97=0
    // now we mark that index with 1
    v[index] = 1;
  }
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  string str = "thequickbrownfoxjumpsoverthelazydog";

  bool isPangram = checkIfPangram(str);
  if (isPangram)
  {
    cout << "sentence is pangram";
  }

  return 0;
}
