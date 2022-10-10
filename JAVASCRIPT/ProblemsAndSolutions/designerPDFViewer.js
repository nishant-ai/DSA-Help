const h = [1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7];
const alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'];
const word = 'zaba';

const getIndex = (alphabet) => {
    return alphabets.indexOf(alphabet);
} 

const wordArr = word.split('');
const wordHeight = wordArr.map(alphabet => h[getIndex(alphabet)]);
const maxHeight = Math.max(...wordHeight);

console.log(maxHeight*word.length);