const height = [2, 5, 4, 5, 2];
const k = 7;

    const max = height.reduce((a, b) => Math.max(a, b));
    if (max - k > 0) {
    console.log(max - k);
    } else {
        console.log(0);
    }
