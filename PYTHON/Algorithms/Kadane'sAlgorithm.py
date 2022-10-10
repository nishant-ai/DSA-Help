'''
Kadane's Algorithm : Given a one - dimensional array, Kadane's Algorithm finds a contiguous subarray with the
maximum sum.
'''
arr = [1, 2, 3, -2, 5]
max_sum = 0
current_sum = 0
flag = 0
nc = 0
for i in arr:
    if i < 0:
        nc += 1
    if nc == len(arr):
        flag = 1
for _ in range(len(arr)):

    current_sum = current_sum + arr[_]
    if current_sum > max_sum:
        max_sum = current_sum
    if current_sum < 0:
        current_sum = 0
if flag == 0:
    print("Contiguous subarray which has the maximum sum is", max_sum)
else:
    print("Contiguous subarray which has the maximum sum is", max(arr))

# OUTPUT => Contiguous subarray which has the maximum sum is 9
