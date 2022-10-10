const n = 2;
const k = 3;
const arr = [4, 2];

let specialProblems = 0;
let page = 1;

for (let i = 0; i < n; i++) {
  const problems = arr[i];
  for (let j = 1; j <= problems; j++) {
    if (j === page) {
      specialProblems++;
    }
    if (j !== problems && j % k === 0) {
      page++;
    }
  }
  page++;
}
console.log(specialProblems);
