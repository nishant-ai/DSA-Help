const p = 1;
const d = 100;
const m = 1;
const s = 9777;

let budget = s;
let total = 0;
let price = p;
while (budget - price >= 0) {
  if (price === m) {
    total++;
    budget -= price;
    // console.log(
    //   'else \n\n Total: ' +
    //     total +
    //     '\n' +
    //     'Budget: ' +
    //     budget +
    //     '\n' +
    //     'Price: ' +
    //     price
    // );
  } else if (price > m) {
    total++;
    budget -= price;
    price = price - d < m ? m : price - d;
    // console.log(
    //   'price > m \n\n Total: ' +
    //     total +
    //     '\n' +
    //     'Budget: ' +
    //     budget +
    //     '\n' +
    //     'Price: ' +
    //     price
    // );
  } else if (price === p) {
    total++;
    budget -= price;
    price -= d;
    // console.log(
    //   'price === 20 \n\n Total: ' +
    //     total +
    //     '\n' +
    //     'Budget: ' +
    //     budget +
    //     '\n' +
    //     'Price: ' +
    //     price
    // );
  }
}
console.log(total);
