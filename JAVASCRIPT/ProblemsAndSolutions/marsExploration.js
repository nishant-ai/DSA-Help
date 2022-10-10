const s = 'SOSOOSOSOSOSOSSOSOSOSOSOSOS';

let totalSosSignals = s.length / 3;
let difference = 0;

for (let i = 0; i < s.length; i += 3) {
  let originalSignal = 'SOS';
  let recievedSignal = s.slice(i, i + 3);
  if (!(recievedSignal === originalSignal)) {
    for (let j = 0; j < 3; j++) {
      if (originalSignal[j] !== recievedSignal[j]) {
        difference++;
      }
    }
  }
}

console.log(difference);
