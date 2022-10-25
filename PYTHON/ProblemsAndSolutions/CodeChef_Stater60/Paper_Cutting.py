# Problem:

# Chef has a square-shaped chart paper with the side length equal to N. He wants to cut out K×K squares from this chart paper.

# Find the maximum number of K×K squares he can cut from the entire chart paper.

# Note that, some part of the chart paper might not be a included in any K K×K cutout square.

# Input Format:
# The first line contains a single integer T — the number of test cases. Then the test cases follow.
# The first and only line of each test case contains two space-separated integers N and K — the side length of the entire chart paper and the side length of the cutout squares.

# Output Format:
# For each test case, output on a new line the maximum number of K×K squares Chef can cut from the entire chart paper.

# Constraints
# 10001 ≤ T ≤ 1000
# 10001 ≤ K ≤ N ≤ 1000

# Solution:
for i in range(int(input())):
    l=list(map(int,input().split()))
    (n,k)=(l[0],l[1])
    print((n//k)**2)
    
# Input:
#   3
#   5 1
#   2 2
#   5 2


# Output:
#   25
#   1
#   4

# Explanation:
# Test case 1: Chef can cut out 25 squares of size 1×1 from the entire 5×5 chart paper.

# Test case 2: Chef can cut out 1 square of size 2×2 from the entire 2×2 chart paper.

# Test case 3: Chef can cut out 4 squares of size 2×2 from the entire 5×5 chart paper.
