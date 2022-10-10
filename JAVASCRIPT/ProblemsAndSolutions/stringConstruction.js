function stringConstruction(s) {
  let p = [];
  return s.split('').filter((item) => {
    if (p.indexOf(item) < 0) {
      p.push(item);
      return item;
    }
  }).length;
}

console.log(stringConstruction('abcd'))