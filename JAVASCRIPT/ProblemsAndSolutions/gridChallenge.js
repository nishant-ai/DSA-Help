const isSorted = (s) => {
  for (let i = 1; i < s.length; i++) {
    if (s[i - 1].charCodeAt() > s[i].charCodeAt()) return false;
  }
  return true;
};

const gridChallenge = (grid) => {
  let i = 0;
  let j = 1;
  grid = grid.map((s) => s.split('').sort().join(''));
  while (true) {
    if (j == grid.length) {
      i++;
      j = 1;
    }
    if (i == grid[0].length) return 'YES';
    if (grid[j - 1][i] > grid[j][i]) return 'NO';
    j++;
  }
  return 'YES';
};

console.log(gridChallenge(['ebacd', 'fghij', 'olmkn', 'trpqs', 'xywuv']));
