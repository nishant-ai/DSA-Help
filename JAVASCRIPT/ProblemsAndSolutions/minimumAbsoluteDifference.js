const minimumAbsoluteDifference = (arr) => {
  arr.sort((a, b) => a - b);
  let minimum = Math.abs(arr[0] - arr[1]);
  for (let i = 0; i < arr.length - 1; i++) {
    let current = Math.abs(arr[i] - arr[i + 1]);
    if (current < minimum) {
      minimum = current;
    }
  }
  return minimum;
};

console.log(
  minimumAbsoluteDifference([-59, -36, -13, 1, -53, -92, -2, -96, -54, 75])
);
