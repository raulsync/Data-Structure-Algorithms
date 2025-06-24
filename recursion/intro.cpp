

// a function calls itself again and again until a specific condition met.

#include <bits/stdc++.h>
using namespace std;

// sum of squares of n natural number

int squareSum(int n)
{
  if (n == 1)
  {
    return 1;
  }

  return (n * n) + squareSum(n - 1);
}

//  print power of 2^n

int printpow(int num, int n)
{
  if (n == 1)
  {
    return num;
  }

  return num * printpow(num, n - 1);
}

// print sum

int printSum(int n)
{
  if (n == 1)
  {
    return 1;
  }

  return n + printSum(n - 1);
}

// print factorial

int fact(int n)
{
  if (n == 1)
  {
    return 1;
  }

  return n * fact(n - 1);
}

// print even numbers between 1 to n

void printEven(int n)
{

  // base condition
  if (n == 2)
  {
    cout << n;
    return;
  }

  //  induxtion

  if (n % 2 == 0)
  {
    cout << n << " ";
    printEven(n - 2);
  }
  else
  {
    printEven(n - 1);
  }
}

// print 1 to n

void print(int n)
{
  // base condition
  if (n == 1)
  {
    cout << 1 << " ";
    return;
  }

  // hypothesis signature
  print(n - 1);
  // induction case
  cout << n << " ";
}

// print n to 1;

void printnto_1(int n)
{
  // base
  if (n == 1)
  {
    cout << 1 << " ";
    return;
  }

  // induction
  cout << n << " ";
  // hypothesis trust on function
  printnto_1(n - 1);
}

int main()
{
  int n = 2;
  print(n);
  cout << endl;
  printnto_1(n);
  cout << endl;
  printEven(n);
  cout << endl;

  int res = fact(n);
  cout << res;
  cout << endl;
  int total = printSum(n);
  cout << total;

  cout << endl;
  int ansPow = printpow(2, n);

  cout << ansPow;

  cout << endl;
  int sqSum = squareSum(4);
  cout << sqSum;
  return 0;
}
