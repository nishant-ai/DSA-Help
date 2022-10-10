const c = [0, 0, 1, 0, 0, 1, 0];

let i = 0;
let jumps = 0;

while (i < c.length - 1) {
  i += 2;
  if (c[i] === 1) {
    i--;
  }
  jumps++;
}
console.log(jumps);
