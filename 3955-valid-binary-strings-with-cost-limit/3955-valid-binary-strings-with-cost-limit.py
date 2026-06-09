class Solution(object):
    def generateValidStrings(self, n, k):
        res=[]
        if n==1:
            if k==0:
                return ["0","1"]
            return []
        for i in range(2**n):
            b=bin(i)[2:]
            if len(b)<n:
                b="0"*(n-len(b))+b
            print(b)
            sum=0
            consec=0
            for j in range(1,len(b)):
                if b[j]=="1":
                    if b[j-1]=="1":
                        consec=1
                        break
                    sum+=j
            if consec==0 and sum<=k:
                res.append(b)
        return res