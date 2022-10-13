class Solution:
    def arrangeCoins(self, n: int) -> int:
         low, high, res = 1, n, 0

         while low < high:
             mid = low + (high - low) // 2 
             if mid * (mid + 1) <= 2 * n:
                 res = mid
                 low = mid
             else:
                 high = mid
        
         return res

        start, end = 1, n
        while start <= end:
            mid = start + (end - start) // 2
            total = mid * (mid + 1) // 2
            if total == n:
                return mid
            elif total < n:
                start = mid + 1
            else:
                end = mid - 1

        return end
