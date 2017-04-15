class Solution(object):

    def reverse(self, x):
        self.x = list(str(x))
        if x < 0:
            self.x.pop(0)
        self.x.reverse()
        self.x = ''.join(self.x)
        self.x = int(self.x)
        if x < 0:
            return -self.x
        if self.x < (-(2**32-1)) or self.x > (2**32-1):
            return 0
        return self.x
