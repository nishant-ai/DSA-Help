function twoStrings(s1, s2) {
  let lettersObject = {};
  for (const letter of s1) {
    if (!lettersObject[letter]) {
      lettersObject[letter] = 1;
    }
  }

  for (const letter of s2) {
    if (lettersObject[letter]) {
      return 'YES';
    }
  }
  return 'NO';
}

console.log(twoStrings('hello', 'world'))