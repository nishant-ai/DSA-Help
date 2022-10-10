const checkUpperCase = (password) => {
  for (let i = 0; i < password.length; i++) {
    if (
      /^[a-zA-Z]+$/.test(password[i]) &&
      password[i] === password[i].toUpperCase()
    ) {
      return true;
    }
  }
  return false;
};

const checkLowerCase = (password) => {
  for (let i = 0; i < password.length; i++) {
    if (
      /^[a-zA-Z]+$/.test(password[i]) &&
      password[i] === password[i].toLowerCase()
    ) {
      return true;
    }
  }
  return false;
};

const checkDigits = (password) => {
  for (let i = 0; i < password.length; i++) {
    if (/^\d+$/.test(password[i])) {
      return true;
    }
  }
  return false;
};

const checkSpecialCharacters = (password) => {
  for (let i = 0; i < password.length; i++) {
    if (/^[!@#$%^&*()\-+]+$/.test(password[i])) {
      return true;
    }
  }
  return false;
};

const n = 7;
const password = 'AUzs-nV';

let charactersToAdd = 0;

if (
  checkLowerCase(password) &&
  checkUpperCase(password) &&
  checkDigits(password) &&
  checkSpecialCharacters(password) &&
  n >= 6
) {
  charactersToAdd = 0;
}

if (!checkLowerCase(password)) {
  charactersToAdd += 1;
}

if (!checkUpperCase(password)) {
  charactersToAdd++;
}

if (!checkDigits(password)) {
  charactersToAdd++;
}

if (!checkSpecialCharacters(password)) {
  charactersToAdd++;
}

if (n + charactersToAdd < 6) {
  charactersToAdd += 6 - (n + charactersToAdd);
}

console.log(charactersToAdd);
