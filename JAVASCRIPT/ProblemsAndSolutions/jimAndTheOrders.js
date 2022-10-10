const jimAndTheOrders = (orders) => {
  let delivery = [];
  for (let i = 0; i < orders.length; i++) {
    delivery.push([orders[i][0] + orders[i][1], i + 1]);
  }

  delivery.sort((a, b) => a[0] - b[0]);

  return delivery.map((value) => value[1]);
};

console.log(
  jimAndTheOrders([
    [1, 3],
    [2, 3],
    [3, 3],
  ])
);
