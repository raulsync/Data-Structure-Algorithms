#include <bits/stdc++.h>
using namespace std;

int main()
{

  // int num1 = 6;
  // int num2 = 1;

  // cout <<"num1&num2 "<<(num1&num2)<<endl;
  // cout <<"num1|num2 "<<(num1|num2)<<endl;
  // cout<<"~num1 "<< (~num1)<<endl;
  // cout<<"num1>>num2 " << (num1>>num2)<<endl;
  // cout<<"num<<1num2 "<<(num1<<num2)<<endl;

  int num, rem;

  cout << "Enter your number ";
  cin >> num;
  int originalNum = num;
  int ans = 0;

  // Convert Decimal to binary number

  int i = 0;
  // while (num != 0)
  // {
  //   int digit = num % 10;
  //   if (digit == 1)
  //   {
  //     ans = ans + pow(2, i);
  //   }
  //   num = num / 10;
  //   i++;
  // }

  // cout << "decimal to binary of " << originalNum << " is " << ans;

  // int i=0;

  // First approach

  // while(num!=0){
  //    rem = num % 2;

  //    num = num /2;

  //    ans = (rem*pow(10,i))+ans;
  //    i++;
  // }

  // 2nd approach

  while (num != 0)
  {

    int bit = num & 1;

    ans = (bit * pow(10, i)) + ans;

    num = num >> 1;
    i++;
  }

  cout
      << "binary of " << originalNum << " is " << ans;

  return 0;
}
