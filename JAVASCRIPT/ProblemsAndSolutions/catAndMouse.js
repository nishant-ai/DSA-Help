const x = 1;
const y = 3;
const z = 2;


// x => CatA
// y => CatB
// z => Mouse

let catA, catB = 0;

// catA = z - x >= 0? z-x : x - z;

catA = Math.abs (x-z);
catB = Math.abs (y-z);

if (catA === catB) {
    console.log("Mouse C");
} else if (catA > catB) {
    console.log("Cat B");
} else {
    console.log ("Cat A");
}