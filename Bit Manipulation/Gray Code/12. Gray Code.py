class Solution:
    def grayCode(self, n: int) -> List[int]:
      curr= [i^i>>1 for i in range(1<<n)]
      return curr
