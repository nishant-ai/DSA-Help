// STATEMENT

// Convert the characters &, <, >, " (double quote), and ' (apostrophe), in a string to their corresponding HTML entities.

function convertHTML(str) {
  let arr = str.split('');
  for (let i = 0; i < arr.length; i++) {
    switch (arr[i]) {
      case '&':
        arr[i] = '&amp;';
        break;
      case '<':
        arr[i] = '&lt;';
        break;
      case '>':
        arr[i] = '&gt;';
        break;
      case '"':
        arr[i] = '&quot;';
        break;
      case "'":
        arr[i] = '&apos;';
        break;
      default:
        arr[i] = arr[i];
        break;
    }
  }
  return arr.join('');
}

convertHTML('Dolce & Gabbana');