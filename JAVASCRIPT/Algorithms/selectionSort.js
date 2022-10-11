const selectionSort = (arr) => {
  const len = arr.length;

  for (let i = 0; i < len; i++) {
    let min = i;
    for (let j = i + 1; j < len; j++) {
      if (arr[j] < arr[min]) min = j;
    }
    if (min != i) {
      [arr[i], arr[min]] = [arr[min], arr[i]];
    }
  }
  return arr;
};

// console.log(selectionSort([45, 3, 79, 14, 459, 21, 999])); // Output: [3, 14, 21, 45, 79, 459, 999];
