const isValid = (s) => {
  let hash = {};
  let max, min;
  let minCount = 0;
  let maxCount = 0;
  
  for (let i = 0; i < s.length; i++) {
    let key = s[i];
    if (hash[key]) {
      hash[key]++;
    } else {
      hash[key] = 1;
    }
  }
  
  let frequencies = [];
  for (let key in hash) {
    frequencies.push(hash[key]);
  }
  
  frequencies.sort();
  min = frequencies[0];
  max = frequencies[frequencies.length - 1];
  
  for (let i = 0; i < frequencies.length; i++) {
    if (frequencies[i] === max) {
      maxCount++;
    }
    if (frequencies[i] === min) {
      minCount++;
    }
  }
  
  if (min === max) {
    return 'YES';
  }
  if (max - (min - 1) == max && minCount === 1 && maxCount !== 1) {
    return 'YES';
  }
  if (max - min !== 1) {
    return 'NO';
  }
  if (maxCount === minCount) {
    return 'NO';
  }
  if (maxCount === 1 || minCount === 1) {
    return 'YES';
  }

  return 'NO';
}
