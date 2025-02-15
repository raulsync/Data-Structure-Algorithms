#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{

  int start = 0;
  int end = arr.size() - 1;

  //     while(start<end){
  //        int mid = start +(end-start)/2;
  //        if(arr[mid]<arr[mid+1]){
  //         start = mid+1;
  //        }else{
  //         end = mid;
  //        }
  //     }
  //     return start;
  // }

  // 2nd way
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    // check whether mid element is greater that left element and right if greater then return mid

    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
    {
      return mid;
    }
    // check whether mid element is less than mi+1 then we shift start to mid+1; else end = mid-1;
    else if (arr[mid] < arr[mid + 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return 0;
}

int main()
{
  vector<int> arr = {3, 4, 5, 1};
  int ans = peakIndexInMountainArray(arr);

  cout << ans;
}
