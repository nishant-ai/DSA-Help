const commonChild = (s1, s2) => {
  const table = [new Array(s2.length + 1).fill(0)];
  for (let i = 0; i < s1.length; i++) {
    table.push([0]);
  }
  for (let i = 1; i < s1.length + 1; i++) {
    for (let j = 1; j < s2.length + 1; j++) {
      if (s1[i - 1] === s2[j - 1]) table[i][j] = table[i - 1][j - 1] + 1;
      else table[i][j] = Math.max(table[i - 1][j], table[i][j - 1]);
    }
  }
  return table[s1.length][s2.length];
};
