const arr = [5, 4, 4, 2, 2, 8];
const countArr = []
const n = arr.length
let sum = -1;
    while (sum != 0) {
      let min = 1000;
      for (let i = 0; i < n; i++) {
        if (min > arr[i] && arr[i] != 0) {
          min = arr[i];
        }
      }
      let count = 0;
      sum = 0;
      for (let i = 0; i < n; i++) {
        if (arr[i] >= min) {
          arr[i] = arr[i] - min;
          count++;
        }
        sum += arr[i];
      }

      countArr.push(count);
    }

    console.log(countArr)
