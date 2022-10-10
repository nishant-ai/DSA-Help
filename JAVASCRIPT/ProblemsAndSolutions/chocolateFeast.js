let n = 15;
let c = 3;
let m = 2;

let numOfChocolates = Math.floor(n / c);
let wrappers = numOfChocolates;

// console.log('Number of Chocolates: ' + numOfChocolates);
// console.log('Number of Wrappers: ' + wrappers);

while (wrappers - m >= 0) {
  numOfChocolates = numOfChocolates + Math.floor(wrappers / m);
  wrappers = (wrappers % m) + Math.floor(wrappers / m);
  //   console.log('Number of Chocolates: ' + numOfChocolates);
  //   console.log('Number of Wrappers: ' + wrappers);
}

console.log(numOfChocolates);
