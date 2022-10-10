const p = [4, 3, 5, 1, 2];
const result = [];

for (let x = 1 ; x <= p.length ; x++) {
    for (let y = 0 ; y < p.length ; y++) {
        if (p[y] === x) {
            result.push(p.indexOf(y + 1) + 1);  
        }
    }
}

console.log(result);