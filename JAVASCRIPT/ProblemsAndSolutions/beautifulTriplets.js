const d = 3;
const arr = [1, 2, 4, 5, 7, 8, 10];
let numOfTriplets = 0;

for (let i = 0; i < arr.length; i++) {
  const triplet = [];
  let root = i;
  triplet.push(arr[i]);
  for (let j = i; j < arr.length; j++) {
    if (triplet.length === 3) {
      break;
    } else if (arr[j] - arr[root] === d) {
      root = j;
      triplet.push(arr[j]);
    }
  }
  if (triplet.length === 3) {
    numOfTriplets++;
  }
}

console.log(numOfTriplets);
