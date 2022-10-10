// STATEMENTS

// Find the missing letter in the passed letter range and return it.

// If all letters are present in the range, return undefined.

function fearNotLetter(str) {
  for (let i = 1; i < str.length; i++) {
    if (!(str.charCodeAt(i - 1) + 1 === str.charCodeAt(i))) {
      return String.fromCharCode(str.charCodeAt(i - 1) + 1);
    }
  }
  return undefined;
}

fearNotLetter('abce');