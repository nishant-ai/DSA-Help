const findIndex = (letter, alphabets) => {
  for (let i = 0; i < alphabets.length; i++) {
    if (letter.toLowerCase() === alphabets[i]) {
      return i;
    }
  }
};

const isUpperCase = (letter) => {
  return letter === letter.toUpperCase();
};

const s = "There's-a-starman-waiting-in-the-sky";
const k = 3;

let toRotate = k % 26;

const alphabets = 'abcdefghijklmnopqrstuvwxyz';
let toShiftAlphabets = alphabets.slice(0, toRotate);
let restOfTheAlphabets = alphabets.slice(toRotate, alphabets.length);
let rotatedAlphabets = restOfTheAlphabets + toShiftAlphabets;

let resultantString = '';

for (let i = 0; i < s.length; i++) {
  if (/[a-zA-Z]/.test(s[i])) {
    let index = findIndex(s[i], alphabets);
    if (isUpperCase(s[i])) {
      resultantString += rotatedAlphabets[index].toUpperCase();
    } else {
      resultantString += rotatedAlphabets[index];
    }
  } else {
    resultantString += s[i];
  }
}

console.log(resultantString);
