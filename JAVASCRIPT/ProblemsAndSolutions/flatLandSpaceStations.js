const n = 5;
const c = [0, 4];

let maxDistance = 0;

// Find Mid values
const sortedArray = [...c];
sortedArray.sort((a, b) => a - b);
let midArray = [];

for (let i = 0; i < c.length - 1; i++) {
  midArray.push(Math.floor((sortedArray[i] + sortedArray[i + 1]) / 2));
}
midArray.push(n - 1);

// Main Loop

let startIndex = 0;
for (let j = 0; j < midArray.length; j++) {
  for (let k = startIndex; k <= midArray[j]; k++) {
    // console.log('Index of k = ' + k + ' and j = ' + j);
    if (Math.abs(k - sortedArray[j]) > maxDistance) {
      maxDistance = Math.abs(k - sortedArray[j]);
    }
  }
  startIndex = midArray[j] + 1;
}

console.log(maxDistance);
