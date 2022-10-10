const n = 8;
const cases = [
  [0, 3],
  [4, 6],
  [6, 7],
  [3, 5],
  [0, 7],
];
const width = [2, 3, 1, 2, 3, 2, 3, 3];
const t = 5;

let slicedWidths = [];
for (let i = 0; i < t; i++) {
  let unit = cases[i];
  let widthSlice = width.slice(unit[0], unit[1] + 1);
  slicedWidths.push(widthSlice);
}

let maxWidthsOfVehicle = [];
for (let g = 0; g < slicedWidths.length; g++) {
  maxWidthsOfVehicle.push(Math.min(...slicedWidths[g]));
}

console.log(maxWidthsOfVehicle);
