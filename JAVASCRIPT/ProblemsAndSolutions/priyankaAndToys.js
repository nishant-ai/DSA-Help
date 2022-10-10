const toys = (w) => {
  w.sort((a, b) => a - b);
  let weight = w[0] + 4,
    container = 1;
  for (let i = 1; i < w.length; i++) {
    if (w[i] > weight) {
      container++;
      weight = w[i] + 4;
    }
  }
  return container;
};

console.log(toys([1, 2, 3, 21, 7, 12, 14, 21]));
