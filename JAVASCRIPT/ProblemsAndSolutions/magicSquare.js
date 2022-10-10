var square = new Array();
for (var i = 0; i < 3; i++) {
  square.push(readLine().split(" ").map(Number));
}
var perm = [
  [
    [8, 1, 6],
    [3, 5, 7],
    [4, 9, 2],
  ],
  [
    [6, 1, 8],
    [7, 5, 3],
    [2, 9, 4],
  ],
  [
    [4, 9, 2],
    [3, 5, 7],
    [8, 1, 6],
  ],
  [
    [2, 9, 4],
    [7, 5, 3],
    [6, 1, 8],
  ],
  [
    [8, 3, 4],
    [1, 5, 9],
    [6, 7, 2],
  ],
  [
    [4, 3, 8],
    [9, 5, 1],
    [2, 7, 6],
  ],
  [
    [6, 7, 2],
    [1, 5, 9],
    [8, 3, 4],
  ],
  [
    [2, 7, 6],
    [9, 5, 1],
    [4, 3, 8],
  ],
];
var min = 10000;
for (var i = 0; i < 8; i++) {
  var sum = 0;
  for (var x = 0; x < 3; x++) {
    for (var y = 0; y < 3; y++) {
      sum += Math.abs(perm[i][x][y] - square[x][y]);
    }
  }
  if (sum < min) {
    min = sum;
  }
}
console.log(min);
