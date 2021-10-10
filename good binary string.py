
def largestMagicalString(n):
    cnt = 0
    p = 0
    res=[]
    for i in range(len(n)):
        if n[i] == '0':
            cnt += 1
        else:
            cnt -= 1
        if cnt == 0:
            m = largestMagicalString(n[p+1:i])
            res.append("1"+m+"0")
            p=p+1
        res.sort(reverse=True)
        return "".join(res)

n = input()
print(largestMagicalString(n))
