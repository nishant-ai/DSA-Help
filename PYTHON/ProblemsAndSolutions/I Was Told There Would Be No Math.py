#Part-1
text_file = open("./Data/day2.txt")
q = text_file.read()
q = q.split("\n")

area = 0
for i in range(len(q)):
    n = q[i].split("x")
    l, b, h = int(n[0]), int(n[1]), int(n[2])
    area += 2*(l*b)+2*(b*h)+2*(h*l)
    area += min(l*b, b*h, h*l)
print(area)

#Part-2
text_file = open("./Data/day2.txt")
q = text_file.read()
q = q.split("\n")

r = 0
for i in range(len(q)):
    n = q[i].split("x")
    l, b, h = int(n[0]), int(n[1]), int(n[2])
    z = [l, b, h]
    z.sort()
    r += 2*(z[0]+z[1])
    r += l*b*h
print(r)