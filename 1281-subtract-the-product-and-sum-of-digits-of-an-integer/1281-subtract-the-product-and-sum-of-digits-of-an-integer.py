class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        n_str=str(n)
        product=1
        sums=0
        for i in n_str:
            product=product*int(i)
            sums=sums+int(i)
        result=product-sums
        return result