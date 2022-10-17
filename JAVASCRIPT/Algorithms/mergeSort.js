function mergeArrays(leftArr, rightArr) {
  let array = [];
  while (leftArr.length && rightArr.length) {
    if (leftArr[0] < rightArr[0]) array.push(leftArr.shift());
    else array.push(rightArr.shift());
  }
  return [...array, ...leftArr, ...rightArr];
}

function mergeSort(arr) {
  const middle = arr.length / 2;
  if (arr.length < 2) return arr;
  const leftArr = arr.splice(0, middle);
  return mergeArrays(mergeSort(leftArr), mergeSort(arr));
}

// console.log(mergeSort([45, 3, 79, 14, 459, 21, 999])); // Output: [3, 14, 21, 45, 79, 459, 999];
