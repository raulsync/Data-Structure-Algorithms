function countCharfreq(str) {
  let freqMap = {};
  for (char of str) {
    if (freqMap[char]) {
      freqMap[char] += 1;
    } else {
      freqMap[char] = 1;
    }
  }
  return freqMap;
}

const str = "javascript";

const ans = countCharfreq(str);
console.log(ans);
