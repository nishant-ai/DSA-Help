const luckBalance = (k, contests) => {
    let balance = 0;
    const losable = [];
    for (const [luck, isImportant] of contests) {
      if (isImportant) losable.push(luck);
      else balance += luck;
    }
    if (k < losable.length) losable.sort((a, b) => b - a);
    for (const luck of losable) balance += k-- > 0 ? luck : -luck;
    return balance;
}

console.log(
  luckBalance(3, [
    [5, 1],
    [2, 1],
    [1, 1],
    [8, 1],
    [10, 0],
    [5, 0],
  ])
);