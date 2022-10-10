const k = 2;
const a = [0, -1, 2, 1];
let arrivedOnTime = 0;

for (let i = 0 ; i < a.length ; i++) {
    if (a[i] <= 0) {
        arrivedOnTime++;
    }
}

if (arrivedOnTime >= k) {
    console.log('NO');
} else {
    console.log('YES');
}