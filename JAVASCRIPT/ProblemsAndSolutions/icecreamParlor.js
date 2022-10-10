const icecreamParlor = (m, arr) => {
    const indices = [];
    for (let i=0;i<arr.length;i++) {
        for (let j=i+1;j<arr.length;j++) {
            if ((arr[i] + arr[j]) === m) {
                indices[0] = i+1;
                indices[1] = j+1;
                return indices;
            }
        }
    }
}

console.log(icecreamParlor(6, [1, 3, 4, 5, 6]));