const h = 3;
const m = 00;

let inWords = [
  'one',
  'two',
  'three',
  'four',
  'five',
  'six',
  'seven',
  'eight',
  'nine',
  'ten',
  'eleven',
  'twelve',
  'thirteen',
  'fourteen',
  'quarter',
  'sixteen',
  'seventeen',
  'eighteen',
  'nineteen',
  'twenty',
  'twenty one',
  'twenty two',
  'twenty three',
  'twenty four',
  'twenty five',
  'twenty six',
  'twenty seven',
  'twenty eight',
  'twenty nine',
  'half',
];

if (m === 0) {
  console.log(inWords[h - 1] + " o'clock");
} else if (m <= 30) {
  if (m === 15 || m === 30) {
    console.log(inWords[m - 1] + ' past ' + inWords[h - 1]);
  } else if (m === 1) {
    console.log(inWords[m - 1] + ' minute past ' + inWords[h - 1]);
  } else {
    console.log(inWords[m - 1] + ' minutes past ' + inWords[h - 1]);
  }
} else {
  if (m === 45) {
    console.log(inWords[59 - m] + ' to ' + inWords[h]);
  } else if (m === 59) {
    console.log(inWords[59 - m] + ' minute to ' + inWords[h]);
  } else {
    console.log(inWords[59 - m] + ' minutes to ' + inWords[h]);
  }
}
