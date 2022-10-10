const arr = [14, 18, 17, 10, 9, 20, 4, 13, 19, 19, 8, 15, 15, 17, 6, 5, 15, 12, 18, 2, 18, 7, 20, 8, 2, 8, 11, 2, 16, 2, 12, 9, 3, 6, 9, 9, 13, 7, 4,,6, 19, 7, 2, 4, 3, 4, 14, 3, 4, 9, 17, 9, 4, 20, 10, 16, 12, 1, 16, 4, 15, 15, 9, 13, 6, 3, 8, 4, 7, 14, 16, 18, 20, 11, 20, 14, 20, 12, 15, 4, 5, 10, 10, 20, 11, 18, 5, 20, 13, 4, 18, 1, 14, 3, 20, 19, 14, 2, 5, 13];

let sortedArr = arr.sort((a, b) => a - b);

let i = 0;
let j = 1;

while (i < sortedArr.length && j < sortedArr.length) {
  if (Math.abs(sortedArr[i] - sortedArr[j]) > 1) {
    i++;
    j++;
  } else {
    j++;
  }
}

let number = Math.abs(i - j);

console.log(number);
