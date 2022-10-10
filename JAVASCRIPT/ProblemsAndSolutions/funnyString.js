function reverseString(str) {
  return str.split('').reverse().join('');
}

const s = 'ovyvzvptyvpvpxyztlrztsrztztqvrxtxuxq';
const reverseS = reverseString(s);

const asciiOfS = [];
const asciiOfR = [];
const differenceOfAsciiOfS = [];
const differenceOfAsciiOfR = [];

for (let i = 0; i < s.length; i++) {
  asciiOfS.push(s.charCodeAt(i));
  asciiOfR.push(reverseS.charCodeAt(i));
}

for (let i = 1; i < s.length; i++) {
  differenceOfAsciiOfS.push(Math.abs(asciiOfS[i] - asciiOfS[i - 1]));
  differenceOfAsciiOfR.push(Math.abs(asciiOfR[i - 1] - asciiOfR[i]));
}

const isFunny =
  JSON.stringify(differenceOfAsciiOfS) === JSON.stringify(differenceOfAsciiOfR)
    ? 'Funny'
    : 'Not Funny';

console.log(isFunny);
