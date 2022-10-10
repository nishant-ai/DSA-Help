const n = 5;
let advertisedTo = 5;
let cumulative = 0;

for (let i = 0; i < n; i++) {
    const peopleLiked = Math.floor(advertisedTo / 2);
    cumulative += peopleLiked;
    advertisedTo = peopleLiked * 3;
}

console.log(cumulative);