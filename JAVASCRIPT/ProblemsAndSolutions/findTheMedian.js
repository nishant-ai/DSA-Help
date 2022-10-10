const findMedian = (arr) => {
  arr.sort((a, b) => a - b);
  const { length } = arr;
  const center = Math.floor(length / 2);
  return arr[center];
};

console.log(findMedian([0, 1, 2, 4, 6, 5, 3]));
