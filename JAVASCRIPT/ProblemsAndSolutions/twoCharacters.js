function alternate(s) {
  if (s.length === 1) {
    return 0;
  }

  let uniqueChar = [...new Set(Array.from(s))];

  let sArr = Array.from(s);
  let longest = 0;

  for (let i = 0; i < uniqueChar.length; i++) {
    let el1 = uniqueChar[i];

    for (let j = 0; j < uniqueChar.length; j++) {
      let el2 = uniqueChar[j];

      let temp = sArr
        .filter((filteredEl) => {
          return filteredEl === el1 || filteredEl === el2;
        })
        .join('');

      if (temp.indexOf(el1 + el1) === -1 && temp.indexOf(el2 + el2) === -1) {
        longest = Math.max(longest, temp.length);
      }
    }
  }

  return longest;
}

console.log(alternate('beabeefeab'));
