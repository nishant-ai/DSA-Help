const ranked = [100, 100, 50, 40, 40, 20, 10];
const player = [5, 25, 50, 120];

let ranks = [];
let result = [];
let rank = 1;

ranks[ranked[0]] = rank;
for (let j = 1; j < ranked.length; j++) {
  if (ranked[j] != ranked[j - 1]) {
    rank++;
    ranks[ranked[j]] = rank;
  }
}

for (let j = 0; j < player.length; j++) {
  result.push(search(ranked, player[j], 0, ranked.length, ranks));
}
console.log(result);

function search(ranked, player, i, j, ranks) {
  if (j - i <= 1) {
    if (player > ranked[i]) {
      return ranks[ranked[i]] - 1 > 0 ? ranks[ranked[i]] - 1 : 1;
    } else if (player == ranked[i]) {
      return ranks[ranked[i]];
    } else if (player > ranked[j]) {
      return ranks[ranked[i]] + 1;
    } else if (player == ranked[j]) {
      return ranks[ranked[j]] == undefined
        ? ranks[ranked[j - 1]]
        : ranks[ranked[j]];
    } else {
      return ranks[ranked[j]] == undefined
        ? ranks[ranked[j - 1]] + 1
        : ranks[ranked[j]] + 1;
    }
  }
  let mid = Math.floor(i + (j - i) / 2);
  if (ranked[mid] < player) {
    return search(ranked, player, i, mid, ranks);
  } else {
    return search(ranked, player, mid, j, ranks);
  }
}
