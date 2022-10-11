T = int(input())
n = input().split(' ')
n = map(int, n)
m = list(n)
N = 0
l = []
while len(m) >= 3:
    for i in range(len(m) - (len(m) % 3)):
        N += m[i]
    m = m[1:]
    l.append(N)
    N = 0
while len(m) < 3 and len(m) != 0:
    l.append(m[0])
    m = m[1:]
print(max(l))
