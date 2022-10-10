let s = 'rhbaasdndfsdskgbfefdbrsdfhuyatrjtcrtyytktjjt';
let hackerrankString = 'hackerrank';
let j = 0;

if (s.length < hackerrankString.length) {
  return 'NO';
}

for (let i = 0; i < s.length; i++) {
  if (s[i] === hackerrankString[j]) {
    j++;
  }
}
return j === hackerrankString.length ? 'YES' : 'NO';
