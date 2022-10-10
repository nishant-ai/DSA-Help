const a = [7, 1, 3, 4, 1, 7];
const distances = [];

for (let i = 0; i < a.length; i++) {
  for (let j = i + 1; j < a.length; j++) {
    if (a[i] === a[j]) {
      distances.push(j - i);
    }
  }
}

if (distances.length === 0) {
  console.log(-1);
} else {
  console.log(Math.min(...distances));
}
