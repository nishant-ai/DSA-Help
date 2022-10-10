const d1 = 2;
const m1 = 7;
const y1 = 1014;

const d2 = 1;
const m2 = 1;
const y2 = 1015;

let fine;

if (y2 === y1 && m2 === m1) {
  if (d1 <= d2) {
    fine = 0;
  } else {
    fine = (d1 - d2) * 15;
  }
} else if (y2 === y1) {
  if (m1 < m2) {
    fine = 0;
  } else {
    fine = (m1 - m2) * 500;
  }
} else {
  if (y1 < y2) {
    fine = 0;
  } else {
    fine = 10000;
  }
}

console.log(fine);
