n, maxSpan = map(int, list(input().split()))
d= {}
while n>0:
    i, t, a = map(str, list(input().split()))
    i = int(i)
    t = int(t)
    if i not in d:
        d[i] = [t, 1]
    else:
        x = d[i][0]
        x = abs(x-t)
        d[i] = [x, d[i][1]+1]
    n-=1

l = []
for j,i in d.items():
    if i[1]==2 and i[0]<maxSpan:
        l.append(i[0])

print(l)
