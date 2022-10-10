const lower = (i) => {
  return 3 * (Math.pow(2, i - 1) - 1) <= t;
};

const upper = (i) => {
  return 3 * (Math.pow(2, i) - 1) >= t;
};

const t = 25;
let i = 1;

while (!(upper(i) && lower(i))) i++;

const value = 3 * (Math.pow(2, i) - 1) - t + 1;
console.log(value);
