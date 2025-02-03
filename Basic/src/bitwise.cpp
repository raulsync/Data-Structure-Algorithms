#include <bits/stdc++.h>
using namespace std;


int main(){





// int num1 = 6;
// int num2 = 1;

// cout <<"num1&num2 "<<(num1&num2)<<endl;
// cout <<"num1|num2 "<<(num1|num2)<<endl;
// cout<<"~num1 "<< (~num1)<<endl;
// cout<<"num1>>num2 " << (num1>>num2)<<endl;
// cout<<"num<<1num2 "<<(num1<<num2)<<endl;







//Convert Decimal to binary number

  int num,rem;

  cout<<"Enter your number ";
  cin>>num;
  int originalNum = num;
  int ans = 0;


  int i=0;

  //First approach

  while(num!=0){
     rem = num % 2;

     num = num /2;

     ans = (rem*pow(10,i))+ans;
     i++;
  }

  //2nd approach

  // while(num!=0){

  //   int bit = num&1;

  //   ans = (bit*pow(10,i))+ans;

  //   num = num >> 1;
  //   i++;

  // }

  cout<<"binary of "<<originalNum<<" is "<<ans;




return 0;
}
