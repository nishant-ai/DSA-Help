#Part-1
text_file = open("./Data/day3.txt")
q = text_file.read()

house = [0,0]
grid = ['0,0']
for i in range(len(q)):
    if q[i] == '^':
        house[1]+=1 
        grid.append(str(house))
    elif q[i] == '<':
        house[0]-=1
        grid.append(str(house))
    elif q[i] == '>':
        house[0]+=1
        grid.append(str(house))
    elif q[i] == "v":
        house[1]-=1
        grid.append(str(house))
n = set(grid)
print(len(n)-1)

#Part-2
text_file = open("./Data/day3.txt")
q = text_file.read()

santa = []
robo = []

for i in range(0, len(q), 2):
    santa.append(q[i])
for i in range(1, len(q), 2):
    robo.append(q[i])

shouse, rhouse = [0, 0], [0, 0]
sgrid, rgrid = ['0, 0'], ['0, 0']

def main(q, house, grid):
    for i in range(len(q)):
        if q[i] == '^':
            house[1]+=1 
            grid.append(str(house))
        elif q[i] == '<':
            house[0]-=1
            grid.append(str(house))
        elif q[i] == '>':
            house[0]+=1
            grid.append(str(house))
        elif q[i] == "v":
            house[1]-=1
            grid.append(str(house))
main(santa, shouse, sgrid)
main(robo, rhouse, rgrid)
fgrid = sgrid+rgrid
fgrid = set(fgrid)
print(len(fgrid)-1)