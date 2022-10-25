# Problem
# In Chefland, a tax of rupees 1010 is deducted if the total income is strictly greater than rupees 100100.

# Given that total income is XX rupees, find out how much money you get.

# Input Format
# The first line of input will contain a single integer TT, denoting the number of test cases.
# The first and only line of each test case contains a single integer XX — your total income.
# Output Format
# For each test case, output on a new line, the amount of money you get.

# Constraints
# 1001 ≤ T ≤ 100
# 10001 ≤ X ≤ 1000

# Solution:
for i in range(int(input())):
    n=int(input())
    if(n>100):
        n -= 10
    print(n)
    
# Input:
#   4
#   5
#   105
#   101
#   100
  
# Output:
#   5
#   95
#   91
#   100
  
# Explanation:
  
# Test case 1: Your total income is 55 rupees which is less than 100100 rupees. 
#               Thus, no tax would be deducted and you get 55 rupees.

# Test case 2: Your total income is 105105 rupees which is greater than 100100 rupees. 
#               Thus, a tax of 1010 rupees would be deducted and you get 105-10 = 95105−10=95 rupees.

# Test case 3: Your total income is 101101 rupees which is greater than 100100 rupees. 
#               Thus, a tax of 1010 rupees would be deducted and you get 101-10 = 91101−10=91 rupees.

# Test case 4: Your total income is 100100 rupees which is equal to 100100 rupees. 
#               Thus, no tax would be deducted and you get 100100 rupees.
