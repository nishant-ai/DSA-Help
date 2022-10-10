const s = 'AAABBB';

let deletions = 0;

for (let i=1;i<s.length;i++) {
    if (s[i] === s[i-1]) {
        deletions++;
    }
}

console.log(deletions)