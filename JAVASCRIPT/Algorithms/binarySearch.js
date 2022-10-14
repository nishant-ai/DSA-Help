const binarySearch = (arr, searchElement) => {
  // Method1) Soring Array
  //   arr.sort(function (a, b) {
  //     return a - b;
  //   });

  // Method2) Sorting Array - Faster
  const typedArray = Float32Array.from(arr);
  const sortedArray = typedArray.sort();

  let start = 0,
    end = sortedArray.length - 1;

  while (start <= end) {
    const middle = Math.floor((start + end) / 2);

    if (sortedArray[middle] === searchElement) return middle;
    else if (sortedArray[middle] < searchElement) start = middle + 1;
    else end = middle - 1;
  }

  return -1;
};

// console.log(binarySearch([28, 59, 68, 16], 5)); // Output: -1
// console.log(binarySearch([28, 59, 68, 16], 68)); // Output: 3
// console.log(binarySearch([28, 59, 68, 16, 1, 6, 5], 68)); // Output: 6
