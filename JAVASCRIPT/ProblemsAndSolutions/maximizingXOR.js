    const maximizingXor = (l, r) => {
        let xor = 0;
        for (let i = l; i <= r; i++) {
        for (let j = l; j <= r; j++) {
            xor = Math.max(i ^ j, xor);
        }
        }
        return xor;
    }

console.log(maximizingXor(10, 15));