function isUpperCase(char) {
  return char === char.toUpperCase();
}

function pangrams(s) {
  const alphabets = 'abcdefghijklmnopqrstuvwxyz';

  let lowerCaseS = s.toLowerCase();

  for (let i = 0; i < alphabets.length; i++) {
    if (lowerCaseS.includes(alphabets[i])) {
      continue;
    } else {
      return 'not pangram';
    }
  }
  return 'pangram';
}

console.log(
  pangrams('We promptly judged antique ivory buckles for the next prize')
);
