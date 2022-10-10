const sumXor = (n) => {
    let count = 0;
    let bitStr = n.toString(2);

    for (let i = 0; i < bitStr.length; i++) {
        if (bitStr[i] === '0') {
            count++;
        }
    }
    count = n === 0 ? 0 : count;
    return Math.pow(2, count);
}

console.log(sumXor(5));