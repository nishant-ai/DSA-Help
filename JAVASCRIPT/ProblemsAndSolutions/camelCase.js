const s = 'camelCase';

let numberOfWords = s ? 1 : 0;
for (let i = 0; i < s.length; i++) {
  if (s[i] === s[i].toUpperCase()) {
    numberOfWords++;
  }
}

console.log(numberOfWords);
