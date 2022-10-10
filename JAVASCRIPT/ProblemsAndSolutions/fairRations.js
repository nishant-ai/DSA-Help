const B = [4, 5, 6, 7];

let numLoavesDistributed = 0;
for (let i = 0; i < B.length - 1; i++) {
  if (B[i] % 2 === 1) {
    B[i]++;
    B[i + 1]++;
    numLoavesDistributed += 2;
  }
}
if (B[B.length - 1] % 2 === 0) {
  console.log(numLoavesDistributed);
} else {
  console.log('NO');
}
