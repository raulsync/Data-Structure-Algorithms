#include <bits/stdc++.h>
using namespace std;

// when we pass param as a pointer and modify anything in it then it reflect in
// original value bcz passing value as pointer we actually pass value's address not th copy of it

void swap(int *a, int *b)
{
  int temp = *a;
  *b = temp;
  *a = *b;
}

// passing large array to a function without copying

void printArray(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void changeValue(vector<int> &nums)
{
  for (auto &x : nums)
  {
    x = 29;
  }
}

// function returning pointer

int main()
{
  // int a = 5;
  // int *p = &a; // store the address of a
  // int arr[] = {1, 2, 3, 4, 5, 6};
  // int *ptr = arr;
  // cout << "address of first element: " << arr << endl;
  // cout << "value of first elem normal: " << arr[0] << endl;
  // cout << "address of first element: " << &arr << endl;
  // cout << "value of first elem using pointer: " << *arr << endl;
  // cout << "value of first elem using ptr: " << *ptr << endl;
  // printArray(arr, 6);

  //& -> address of a variable kisi bhi variable ka address nikalna
  //* -> give tha value at that address  (dereferencing)
  // pointer size 32 bit => 4 bytes 64 bit => 8 bytes

  // double pointer it stores the address of another pointer

  // int **ptr = &p;

  // cout << "double pointer address of p: " << ptr << endl;
  // cout << "value at double pointer p: " << **ptr << endl;

  // cout << "value of a: " << a << endl;
  // cout << "address of a: " << &a << endl;
  // cout << "value of p: " << p << endl; // it gives the address of a because it store the address of a
  // cout << "value pointed by p: " << *p << endl;
  // *p = 10; // value of a also change because p pointed to address a;
  // cout << "new value of p: " << *p << endl;
  // cout << "new value of a: " << a << endl;

  // char str[] = "Hello";
  // char *strptr = str;

  // char ch = 'A';
  // char *chptr = &ch;
  // void pointer ek address ko point karta hai but jis position ki address btata hai uss position pe jo value hai
  // uska type nahi btata hai
  // cout << "address of str: " << (void *)str << endl; // treat as c style string so it gives the output hello;

  // cout << "value of str [0]: " << str[0] << endl;
  // cout << "address of str using ptr: " << (void *)strptr << endl;
  // cout << "value of string using ptr: " << *strptr << endl;

  // cout << "value of ch: " << ch << endl;
  // cout << "address of ch:" << (void *)&ch << endl;
  // cout << "address of ch using pointer: " << (void *)chptr << endl;
  // cout << "value of ch using pointer: " << *chptr << endl;

  // int a = 10, b = 20;
  // swap(a, b);

  // cout << a << " " << b << endl;

  // vector<int> v(20, 0);
  // changeValue(v);

  // for (int num : v)
  // {
  //   cout << num << " ";
  // }

  int arr[] = {1, 2, 3, 4, 5};
  int *arrptr = arr;

  cout << "firse elem: " << *arr << endl;
  cout << "access 2nd elem: " << *(arr + 1) << endl;

  // Memory Leak: Agar aap new se memory allocate karte ho par delete nahi karte, toh woh memory waste ho jaati hai.

  // Solution: Har new ke baad delete ka use karo.

  // Dangling Pointer: Agar aap delete karte ho aur phir pointer ko use karte ho, toh dangling pointer hota hai.

  // Solution: delete ke baad pointer ko nullptr assign karo.

  // Double Delete: Agar aap same pointer ko delete karte ho do baar, toh program crash kar sakta hai.

  int *p = new int;
  *p = 10;
  cout << *p << endl;

  delete p;

  // dynamic memory with array

  int *arr1 = new int[5];

  // assigning value to array
  for (int i = 0; i < 5; i++)
  {
    arr[i] = i + 2;
  }
  // printing array
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // deleting the memory
  delete[] arr1;
  return 0;
}
