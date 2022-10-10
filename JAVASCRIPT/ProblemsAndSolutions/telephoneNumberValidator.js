function telephoneCheck(str) {
  var isValid = false;
  var formats = [
    /^\d\d\d\d\d\d\d\d\d\d$/,
    /^\d\d\d-\d\d\d-\d\d\d\d/,
    /^\d\d\d\s\d\d\d\s\d\d\d\d/,
    /^\(\d\d\d\)\d\d\d-\d\d\d\d/,
    /^\(\d\d\d\)\s\d\d\d-\d\d\d\d/,
    /^1\d\d\d\d\d\d\d\d\d\d/,
    /^1\s\d\d\d\s\d\d\d\s\d\d\d\d/,
    /^1\s\d\d\d-\d\d\d-\d\d\d\d/,
    /^1\(\d\d\d\)\d\d\d-\d\d\d\d/,
    /^1\s\(\d\d\d\)\s\d\d\d-\d\d\d\d/,
  ];

  isValid = formats.some((reg) => reg.test(str));

  return isValid;
}

telephoneCheck('555-555-5555');
