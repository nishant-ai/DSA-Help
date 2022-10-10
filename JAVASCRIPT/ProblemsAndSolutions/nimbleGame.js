const nimbleGame = (s) => {
  let xor = 0;
  for (let i = 0; i < s.length; i++) {
    if (s[i] % 2 != 0) xor ^= i;
  }
  if (xor == 0) return 'Second';
  else return 'First';
};
