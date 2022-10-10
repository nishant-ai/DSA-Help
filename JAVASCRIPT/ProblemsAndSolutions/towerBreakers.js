const towerBreakers = (n, m) => {
    return m === 1 || n % 2 === 0 ? 2 : 1;
}

console.log(towerBreakers(2, 2));