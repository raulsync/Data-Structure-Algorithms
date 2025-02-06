
#include <bits/stdc++.h>
using namespace std;

int main()
{

  // int age;
  // cout <<"Enter your age: ";

  // cin >> age;
  // cout <<"Your age is : "<<age << "\n";

  // if(age>18){
  //   cout <<" You are eligible for voting"<<"\n";
  // }  else{
  //   cout <<"You are not eligible for voting"<<"\n";
  // }

  // int a;
  // cout <<"Enter value of a : "<<"\n";
  // cin >> a;

  // int b;

  // cout <<"Enter value of b : ";
  // cin>> b;

  // if(a>b){
  //   cout<<"a is greater than b";
  // } else if(b>a){
  //   cout<<"b is greater than a";
  // }

  // if char is between "a-z" then print it is in lowerCase else if "A-Z" print upperCase else "0 to 9" print it is numeric;

  char c;

  cout << "Enter character:";
  cin >> c;
  cout << "\n";

  /*


    if(c>='a'&& c<='z'){
      cout<<c<<" is in lower case";
    }else if(c>='A' && c<='Z' ){
      cout<<c<<" is in upperCase";
    }else if(c>='0' && c<='9'){
      cout<<c<<" is numeric";
    }else{
      cout<<"you type wrong character";
    }

    We can do this with another metho also;
    use of ascii character
    or use of switch case
  */

  int _ascii = int(c);

  if (_ascii <= 122 && _ascii >= 97)
  {
    cout << "Value of " << c << " is in lowerCase";
  }
  else if (_ascii <= 90 && _ascii >= 65)
  {
    cout << "Value of " << c << " is in upperCase";
  }
  else if (_ascii <= 57 && _ascii >= 48)
  {
    cout << "Value of " << c << " is numeric";
  }

  return 0;
}
