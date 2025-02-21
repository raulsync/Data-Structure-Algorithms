#include <bits/stdc++.h>
using namespace std;

// void pairDemo()
// {
//   // initialize pair
//   pair<int, int> q = {2, 4};
//   // access pair
//   cout << q.first << " " << q.second << endl;

//   // nesting pair

//   pair<int, pair<string, int>> p = {1, {"rahul", 12}};

//   cout << p.first << " " << p.second.first << " " << p.second.second << endl;

//   // we can also declare array of pair elements

//   pair<int, int> arr[3] = {{1, 2}, {2, 3}, {3, 4}};

//   for (int i = 0; i < 3; i++)
//   {
//     cout << arr[i].first << " " << arr[i].second << " ";
//   }
// }

void vectorDemo()
{
  // dynamic array change length based on elements
  // when we push_back something in vector then it creates new array of double the size of present element
  vector<int> v = {1, 9, 2, 3, 5, 7};

  cout << "Front " << v.front() << endl;
  cout << "Back " << v.back() << endl;

  // to insert element at back of the container
  // sort(v.begin(), v.end());

  // v[1] = 5;
  // insert at index 2

  v.insert(v.begin() + 1, 11);

  v.push_back(10);
  v.emplace_back(11);
  v.pop_back(); // remove element from back;

  // sort in descending order
  sort(v.rbegin(), v.rend());

  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << " ";
  // }

  // we can do this using iterator also
  // for (int x : v)
  // {
  //   cout << x << " ";
  // }

  // 2nd method also used here

  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;
  cout << v.size() << endl; // return size of element present in vector

  cout << v.capacity() << " "; // size of vector

  // cout << v[0] << " " << v[1];
}

int main()
{

  // pair stl utility

  // pairDemo();

  vectorDemo();

  return 0;
}
