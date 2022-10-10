let a = 10;
let b = 100000;

let count = 0;

a = Math.ceil(Math.sqrt(a));
b = Math.floor(Math.sqrt(b));

count = b - a + 1;

console.log(count);
