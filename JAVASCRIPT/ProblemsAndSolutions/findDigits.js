// const n = 1012;
// const n = 11;
const n = 123456789;
// 114108089;
// 110110015;
// 121;
// 33;
// 44;
// 55;
// 66;
// 77;
// 88;
// 106108048;

const findDigits = (n) => {
  let countDivisor = 0;
  let digits = [];
  let temp = n;
  while (temp > 0) {
    let digit = temp % 10;
    digits.push(digit);
    temp = Math.floor(temp / 10);
  }

  for (let i = 0; i < digits.length; i++) {
    if (n % digits[i] === 0) {
      console.log(`${n} % ${digits[i]} === ${n % digits[i]}`);
      countDivisor++;
    }
  }
  return countDivisor;
};

console.log(findDigits(n));
