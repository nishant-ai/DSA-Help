const str = "DDUUDDUDUUUD";
let v=0;
let lvl=0;

for (let i = 0; i < str.length; i++) {
    if (str[i] === 'U') ++lvl;
    if (str[i] === 'D') --lvl;
    if (lvl === 0 && str[i] === 'U') ++v;
}

console.log (v);
