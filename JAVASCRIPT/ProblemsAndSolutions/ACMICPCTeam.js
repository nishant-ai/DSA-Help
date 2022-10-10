const topic = ['11101', '10101', '11001', '10111', '10000', '01110'];
let maxTopics = 0;
let numberOfTeams = 0;
const teamScores = [];
const cleverTeam = [];

for (let i = 0; i < topic.length - 1; i++) {
  for (let j = i + 1; j < topic.length; j++) {
    const teamScore = [];
    for (let k = 0; k < topic[0].length; k++) {
      if (topic[i].charAt(k) == 1 || topic[j].charAt(k) == 1) {
        teamScore.push(k + 1);
      }
    }
    teamScores.push(teamScore);
    if (teamScore.length > maxTopics) {
      maxTopics = teamScore.length;
    }
  }
}

for (let i = 0; i < teamScores.length; i++) {
  if (teamScores[i].length === maxTopics) {
    numberOfTeams++;
  }
}

cleverTeam.push(maxTopics);
cleverTeam.push(numberOfTeams);

console.log(cleverTeam);
