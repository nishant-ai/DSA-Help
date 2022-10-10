const k = 3;
const c = [1, 1, 1, 0, 1, 1, 0, 0, 0, 0];
let energy = 100;
let i = k % c.length;

energy -= (c[i] * 2) + 1;

while (i !== 0) {
    i = (i + k) % c.length;
    energy -= (c[i] * 2) + 1;
}

console.log(energy);