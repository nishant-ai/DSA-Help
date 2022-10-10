const s = 'baab';

let resultantString = s.split('');

for (let i = 0; i < resultantString.length; i++) {
  if (resultantString[i] === resultantString[i + 1]) {
    resultantString.splice(i, 2);
    i = -1;
  }
}

resultantString = resultantString.join('');

if (!resultantString) {
  resultantString = 'Empty String';
}

console.log(resultantString);
