function swap(arr, i, j) {
  let temp;
  temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

function move01(arr) {
  // let countzero = 0;
  // let countOne = 0;
  // for (let i = 0; i < arr.length; i++) {
  //   if (arr[i] == 0) {
  //     countzero++;
  //   } else if (arr[i] == 1) {
  //     countOne++;
  //   }
  // }

  // for (let i = 0; i < countzero; i++) {
  //   arr[i] = 0;
  // }
  // for (let i = countzero; i < arr.length; i++) {
  //   arr[i] = 1;
  // }

  //solve this using two pointer approach

  let start = 0;
  let end = arr.length - 1;
  while (start <= end) {
    if (arr[start] == 0 && arr[end] == 1) {
      start++;
      end--;
    } else if (arr[start] == 1 && arr[end] == 0) {
      swap(arr, start, end);
      start++;
      end--;
    } else if (arr[start] == 0) {
      start++;
    } else {
      end--;
    }
  }

  arr.forEach((element) => {
    console.log(element);
  });
}

let arr = [1, 0, 1, 0, 1];

move01(arr);
