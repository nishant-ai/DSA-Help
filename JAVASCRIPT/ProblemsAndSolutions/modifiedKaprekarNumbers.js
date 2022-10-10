function splitNum(num) {
  num = (num * num).toString();
  let center;
  let result;

  if (num.length > 1) {
    center = Math.floor(num.length / 2);
    result = [
      parseInt(num.substr(0, center)),
      parseInt(num.substr(center, num.length)),
    ];
  } else {
    center = 0;
    result = [parseInt(num), 0];
  }
  return result;
}

const p = 1;
const q = 100;
let kaprekar = [];

for (let i = p; i <= q; i++) {
  let sq = splitNum(i);
  if (sq[0] + sq[1] == i) {
    kaprekar.push(i);
  }
}

if (kaprekar.length == 0) {
  console.log('INVALID RANGE');
} else {
  console.log(kaprekar.join(' '));
}
