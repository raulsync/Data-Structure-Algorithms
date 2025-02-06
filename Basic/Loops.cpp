#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  //  int i = 0;
  //  while(i<=n){
  //    cout << i<<"\n";
  //    i++;
  //  }

  // print sum of n number

  //  int sum = 0;
  //  int i = 0;
  //  while(i<=n){
  //   sum = sum+i;
  //   i++;
  //  }

  //  cout<<"Sum of "<<n<<" is "<<sum;

  // sum of all even number
  //   int sum = 0;
  //   int i = 2;
  //   while(i<=n){
  //      sum = sum +i;
  //      i = i+2;
  //   }
  //   cout<<"sum of all even number till "<< n <<" is "<<sum;

  // Check Prime Number

  // int i=2;
  // bool isPrime = true;

  // while(i<n){
  //   if(n%i==0){
  //     cout<<"Not prime";
  //     isPrime = false;
  //     break;
  //   }
  //   i++;
  // }

  // if(isPrime){
  //    cout<<n<<" is Prime";
  // }

  // multiplication table

  // for(int i=1;i<=10;i++){
  //   cout<<n*i<<endl;
  // }

  // for(int i = 1;i<=n;i++){
  //      for(int j=i;j<=n;j++){
  // 	   cout<<j<<"";
  //    }
  //    cout<<endl;
  // }

  // Print all prime number between n

  int count = 0;
  int sum = 0;
  for (int i = 2; i < n; i++)
  {
    bool isPrime = true;
    for (int j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      count++;
      sum += i;
      cout << i << " ";
    }
  }
  cout << "sum " << sum << endl;
  cout << "Count " << count;

  return 0;
}
