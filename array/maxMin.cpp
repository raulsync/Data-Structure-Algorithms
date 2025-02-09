#include <bits/stdc++.h>
using namespace std;

int maxelem(int num[], int size)
{
  int maximumValue = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    // if (num[i] > max)
    // {
    //   max = num[i];
    // }
    // we can do this with inbuilt function
    maximumValue = max(maximumValue, num[i]);
  }
  return maximumValue;
}

int minElem(int num[], int size)
{
  int minimumValue = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    // if (num[i] < min)
    // {
    //   min = num[i];
    // }
    // we can do this with inbuilt function
    minimumValue = min(minimumValue, num[i]);
  }
  return minimumValue;
}

int main()
{
  int size;

  cout << "size of array " << endl;

  cin >> size;
  int num[100];

  cout << "enter element of array " << endl;

  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }

  int ansMax = maxelem(num, size);
  int ansMin = minElem(num, size);

  cout << " max element in array is " << ansMax << endl;
  cout << " min element in array is " << ansMin;

  return 0;
}
