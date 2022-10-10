const gameOfStones = (n) => {
  if (n % 7 === 0 || n % 7 === 1) return 'Second';
  return 'First';
};
