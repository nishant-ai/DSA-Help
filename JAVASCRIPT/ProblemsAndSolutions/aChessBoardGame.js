const chessboardGame = (x, y) => {
    x = x % 4;
    y = y % 4;
    return (x === 0 || x === 3 || y === 0 || y === 3) ? 'First' : 'Second';
}

console.log(chessboardGame(5, 2));