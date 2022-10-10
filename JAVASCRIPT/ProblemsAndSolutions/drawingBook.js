 const n = 5;
 const p = 4;
 let front = 0;
 let back = 0;


 front = Math.floor(p/2);
 back = Math.floor(n/2) - front;

if (front <= back) {
    console.log (front);
} else {
    console.log (back);
}