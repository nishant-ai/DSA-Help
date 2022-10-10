const lonelyInteger = (a) => {
  let unique = a.filter(function (value) {
    return a.indexOf(value) === a.lastIndexOf(value);
  });
  return unique[0];
};

console.log(lonelyInteger([1, 1, 2]));
