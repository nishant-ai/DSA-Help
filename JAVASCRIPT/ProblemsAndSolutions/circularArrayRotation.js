const k = 2;
const a = [1, 2, 3];
const queries = [0, 1, 2];
const result = [];

for (let i = 0; i < k; i++) {
    const last = a.pop();
    a.unshift(last);
}

for (let i = 0; i < queries.length ; i++) {
    result[i] = a[queries[i]];
}

console.log(result);