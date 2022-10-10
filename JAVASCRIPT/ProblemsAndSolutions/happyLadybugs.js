const checkAllUnderscores = (arr) => {
  let stringArray = arr.toString().replace(/,/g, '');
  let i = stringArray.indexOf('_');
  let partOne = stringArray.slice(0, i).trim();
  let partTwo = stringArray.slice(i + 1, stringArray.length).trim();
  let partTwoArr = [...partTwo];

  return partTwoArr.every((val, i) => val === '_');
};

const checkPattern = (arr) => {
  const contains = [];
  for (let i = 0; i < arr.length - 1; i++) {
    if (arr[i] === arr[i + 1]) {
      contains.push(arr[i]);
      continue;
    } else if (contains.includes(arr[i])) {
      continue;
    } else {
      return 'NO';
    }
  }
  return;
};

const happyLadybugs = (b) => {
  const arr = [...b];
  let allUnderscores = false;
  let hasUnderscore = true;

  if (!arr.includes('_')) {
    hasUnderscore = false;
  }

  while (!allUnderscores && hasUnderscore) {
    for (let i = 0; i < b.length - 1; i++) {
      if (arr[i] === '_') {
        for (let j = i + 1; j < b.length; j++) {
          if (arr[j] === arr[i - 1] || arr[j] === arr[i + 1]) {
            if (arr[j] === arr[i - 1] && arr[i - 1] !== '_') {
              let temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            } else if (arr[j] === arr[i + 1] && arr[i + 1] !== '_') {
              let temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            }
          }
        }
      }
    }
    allUnderscores = checkAllUnderscores(arr);
  }

  if (!hasUnderscore && checkPattern(arr) === 'NO') {
    return 'NO';
  }
  const count = {};

  for (const element of arr) {
    if (count[element]) {
      count[element] += 1;
    } else {
      count[element] = 1;
    }
  }

  for (const key in count) {
    if (key === '_') {
      return 'YES';
    } else if (count[key] <= 1) {
      return 'NO';
    }
  }
};

console.log(
  happyLadybugs(
    '__MY_T_C_FY_USSALD_U_AIEJRPVNUA_TI_CAYTE__EPI_FDLMA_U_CC_AAUAVNUSJYAUD_AP_CIA_D_E__TAUSU_N'
  )
);
