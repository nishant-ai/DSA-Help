const checkPallindrome = (value) => {
  const len = value.length;

  for (let i = 0; i < len / 2; i++) {
    if (value[i] !== value[len - 1 - i]) {
      return false;
    }
  }
  return true;
};

const checkPallindrome2 = (value) => {
  const data = typeof value === "number" ? value.toString() : value;
  return data === data.toString().split("").reverse().join("");
};

// console.log(checkPallindrome(456789313987654)); // Output: true
// console.log(checkPallindrome2(456789313987654)); // Output: true
// console.log(checkPallindrome("456789313987654")); // Output: true
// console.log(checkPallindrome2("456789313987654")); // Output: true
