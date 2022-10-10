const n = 4;
const a = 10;
const b = 100;

let firstStone = 0;

const possibleLastStones = [];
if (a === b) {
  console.log(a * (n - 1));
} else {
  for (let i = 0; i < n; i++) {
    possibleLastStones[i] = firstStone + i * b + (n - 1 - i) * a;
  }
  possibleLastStones.sort((a, b) => a - b);
  console.log(possibleLastStones);
}
