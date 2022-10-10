const s = 'aba';
const n = 1000000000000;
const sArray = s.split('');

const stringSize = s.length;
const a = sArray.filter((a) => a == 'a').length;

const repeat = Math.floor(n / stringSize);

const left = n - repeat * stringSize;
const remaining =
  repeat * a + sArray.filter((a, i) => a == 'a' && i < left).length;

console.log(remaining);
