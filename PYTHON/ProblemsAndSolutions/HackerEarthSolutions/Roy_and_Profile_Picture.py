L = int(input())
N = int(input())
for i in range(N):
    D = input().split()
    W, H = int(D[0]), int(D[1])
    if (W < L or H < L):
        print("UPLOAD ANOTHER")
    elif (W != H):
        print("CROP IT")
    else:
        print("ACCEPTED")
