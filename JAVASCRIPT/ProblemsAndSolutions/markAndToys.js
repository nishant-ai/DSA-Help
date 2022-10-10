const maximumToys = (prices, k) => {
  prices.sort((a, b) => a - b);
  let maxToys = 0;
  let budget = 0;

  while (budget + prices[maxToys] <= k) {
    budget += prices[maxToys];
    maxToys++;
  }

  return maxToys;
};

console.log(maximumToys([1, 12, 5, 111, 200, 1000, 10], 50));
