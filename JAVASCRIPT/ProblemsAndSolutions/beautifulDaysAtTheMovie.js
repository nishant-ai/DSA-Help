const i = 20;
const j = 23;
const k = 6;
let beautifulDays = 0;

function reverseNumber (n) {
    let reversedNumber = 0;
    let temp = n;
    while (temp > 0) {
      reversedNumber = reversedNumber * 10 + (temp % 10);
      temp = Math.floor(temp / 10);
    }
    return (reversedNumber);
}

for (let a = i; a <= j; a++) {
    let reversedNumber = reverseNumber(a);
    let difference = Math.abs(a - reversedNumber);   
    if (difference % k == 0) {
        beautifulDays++;
    }
}

console.log(beautifulDays);
