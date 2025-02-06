#include<bits/stdc++.h>
using namespace std;


int main(){

  int n;
  cin>>n;

  // for (int i = 0; i<n;i++){
  //   for (int j=0;j<n;j++){

  //   cout <<"*";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for (int j=0;j<=i;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }


  /*
  1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4
  */

   int row =n;
  // for(int i=1; i<=row;i++){
  //   for (int j=1;j<=row;j++){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;
  // }

  /*
   3 2 1
   3 2 1
   3 2 1
  */


// for (int i=1;i<=row;i++){
//   for(int j=row;j>=1;j--){
      //cout<<n-j+1
//     cout<<j;
//   }
//   cout<<endl;
// }

/*
 1 2 3
 4 5 6
 7 8 9
*/

//  int count = 1;
//  for(int i=1;i<=row;i++){
//   for (int j=1;j<=row;j++){
//     cout<<count<<" ";
//     count++;

//   }
//   cout<<endl;
//  }

/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/



//  for(int i=1;i<=row;i++){
//   int count = i;
//   for(int j=1;j<=i;j++){
//     cout <<count <<" ";
//     count++;
//   }
//   cout << endl;
//  }

/*
 1
 2 1
 3 2 1
 4 3 2 1
*/

//  for(int i=1;i<=row;i++){
//   for(int j=i;j>=1;j--){
//     cout<<j<<" ";
//   }
//   cout <<endl;
//  }

  /*
  A A A
  B B B
  C C C
  */

  char ch = 'A';
 for(int i=1; i<=row;i++){

  for(int j = i;j>=1;j--){
    cout << ch <<" ";
    ch++;
  }
  cout <<endl;
 }


  return 0;
}
