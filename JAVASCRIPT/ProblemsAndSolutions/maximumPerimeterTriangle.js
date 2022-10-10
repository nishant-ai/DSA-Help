const maximumPerimeterTriangle = (a) => {
    a.sort((a1, b1) => b1 - a1);
    let elements = [];
    let sum = 0;
    for (let i = 2; i < a.length; i++) {
      if (a[i - 2] < a[i - 1] + a[i]) {
        let tempSum = a[i] + a[i - 1] + a[i - 2];
        if (tempSum > sum) {
          sum = tempSum;
          elements = [a[i], a[i - 1], a[i - 2]];
        }
      }
    }
    return elements.length ? elements : [-1];
}

console.log(maximumPerimeterTriangle([1, 1, 1, 2, 3, 5]));