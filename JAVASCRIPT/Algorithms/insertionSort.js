const insertionSort = (arr) => {
  for (let i = 1; i < arr.length; i++) {
    let currentValue = arr[i];
    let j;
    for (j = i - 1; j >= 0 && arr[j] > currentValue; j--) {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = currentValue;
  }
  return arr;
};

// console.log(insertionSort([45, 3, 79, 14, 459, 21, 999])); // Output: [3, 14, 21, 45, 79, 459, 999];
