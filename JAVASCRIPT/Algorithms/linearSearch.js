const linearSearch = (arr, searchElement) => {
  for (let index = 0; index < arr.length; index++) {
    if (arr[index] === searchElement) return index;
  }
  return -1;
};

// console.log(linearSearch([28, 59, 68, 16], 5)); // Output: -1
// console.log(linearSearch([28, 59, 68, 16], 68)); // Output: 2
