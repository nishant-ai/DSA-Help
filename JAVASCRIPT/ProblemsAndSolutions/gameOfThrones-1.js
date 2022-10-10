const s = 'cdefghmnopqrstuvw';

function gameOfThrones(s) {
  let charCount = {};
  for (let i = 0; i < s.length; i++) {
    if (charCount[s[i]]) {
      charCount[s[i]]++;
    } else {
      charCount[s[i]] = 1;
    }
  }

  let notEvenCount = 0;

  for (const key in charCount) {
    if (!(charCount[key] % 2 === 0)) {
      notEvenCount++;
    }
  }

  return notEvenCount <= 1 ? 'YES' : 'NO';
}

console.log(gameOfThrones(s));
