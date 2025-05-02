function calculateGcd(a, b) {
  let ans = 1;
  //we can iterate through 2 to min(a,b)
  for (let i = 2; i <= Math.min(a, b); i++) {
    if (a % i == 0 && b % i == 0) {
      ans = i;
    }
  }
  //we get the larget element that divide both a and b after completion of iteration
  return ans;
}

const ans = calculateGcd(24, 28);

console.log(ans);

//2nd method is euclid theorem
