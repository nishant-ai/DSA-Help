const bill = [3, 10, 2, 9];
const k = 1;
const b = 7;
let sum = 0;

for (let i = 0; i<bill.length; i++) {
    if (i === k) {
        continue;
    }
    sum += bill[i];
}

const total = sum/2;
if (b===total) {
    console.log('Bon Appetit');
} else {
    console.log(b-total);
}