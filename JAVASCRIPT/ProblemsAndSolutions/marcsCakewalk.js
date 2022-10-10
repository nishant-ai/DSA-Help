const marcsCakewalk = (calorie) => {
  calorie.sort((a, b) => b - a);
  let miles = 0;
  for (let i=0;i<calorie.length;i++) {
    miles += (Math.pow(2, i)) * calorie[i];
  }
  return miles;
};

console.log(marcsCakewalk([5, 10, 7]));
