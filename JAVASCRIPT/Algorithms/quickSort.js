const quickSort = (arr) => {
  if (arr.length <= 1) return arr;

  let pivot = arr[0],
    leftArr = [],
    rightArr = [];

  for (var i = 1; i < arr.length; i++) {
    arr[i] < pivot ? leftArr.push(arr[i]) : rightArr.push(arr[i]);
  }

  return quickSort(leftArr).concat(pivot, quickSort(rightArr));
};

console.log(quickSort([45, 3, 79, 14, 459, 21, 999])); // Output: [3, 14, 21, 45, 79, 459, 999];
