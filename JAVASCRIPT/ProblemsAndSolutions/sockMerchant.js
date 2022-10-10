const ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]

const countObj = {};
let count=0;

ar.forEach((x) => {
  countObj[x] = (countObj[x] || 0) + 1;
});

Object.keys(countObj).forEach(key => {
    countObj[key] = Math.floor(countObj[key] / 2);
    if (countObj[key] !== 0) {
        count += countObj[key];
    }
  });

  console.log (countObj)
  console.log (count)
