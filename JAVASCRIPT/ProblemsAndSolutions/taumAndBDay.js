let b = 742407782;
let w = 90529439;
const bc = 847666641;
const wc = 8651519;
const z = 821801924;
let minCost = 0;

const minCostOfB = bc < wc + z ? bc : wc + z;
const minCostOfW = wc < bc + z ? wc : bc + z;

b = b * minCostOfB;
w = w * minCostOfW;
minCost = b + w;

console.log(minCost);
