n = input()
x, y = 0, 0
for i in range(len(n)):
    if ('z' in n[i]):
        x+=1
    else:
        y+=1
if (x*2 == y):
    print("Yes")
else:
    print("No")
