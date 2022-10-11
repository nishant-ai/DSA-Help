N = input().split(' ')
N = list(map(int, N))
n = 0
for i in range(N[0], N[1]+1):
    if (i % N[2] == 0):
        n += 1
print(n)
