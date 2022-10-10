const misereNim = (pile) => {
  let xor = pile[0],
    totalStones = pile[0];
  for (let i = 1; i < pile.length; i++) {
    totalStones += pile[i];
    xor = xor ^ pile[i];
  }

  if (totalStones == pile.length) {
    return totalStones % 2 == 0 ? 'First' : 'Second';
  }

  return xor ? 'First' : 'Second';
};

console.log(misereNim([1, 1]));