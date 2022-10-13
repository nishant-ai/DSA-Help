#Part-1
text_file = open("./Data/day1.txt")
f = 0
for i in text_file:
    for j in range(len(i)):
        if (i[j] == "("):
            f+=1
        else:
            f-=1
print(f)

#Part-2
text_file = open("./Data/day1.txt")
f = 0
for i in text_file:
    for j in range(len(i)):
        if (i[j] == "("):
            f+=1
        elif (i[j] == ")"):
            f-=1
        if (f == -1):
            print(j+1)
            break
