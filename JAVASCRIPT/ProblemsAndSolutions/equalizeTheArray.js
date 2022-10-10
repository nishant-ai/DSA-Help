const arr = [1, 2, 2, 3];
let max = 0;

for (let i = 0; i < arr.length; i++) {
  let count = 0;
  for (let j = 0; j < arr.length; j++) {
    if (arr[i] === arr[j]) {
      count++;
    }
  }
  max = count > max ? count : max;
}

const minDeletions = arr.length - max;
console.log(minDeletions);
