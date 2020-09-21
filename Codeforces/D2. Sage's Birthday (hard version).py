n = int(input())
l = list(map(int,input().split()))
l.sort()
d = n//2
r1,r2=[],[]
for i in range(d):
    r1.append(l[i+d])
    r1.append(l[i])
    r2.append(l[i])
    r2.append(l[i+d])
if n%2==1:
    r1.append(l[-1])
    r2.append(l[-1])
c1,c2=0,0
for i in range(1,n-1):
    if r1[i]<r1[i-1] and r1[i]<r1[i+1]:
        c1+=1
    if r2[i]<r2[i-1] and r2[i]<r2[i+1]:
        c2+=1
if c1>c2:
    print(c1)
    print(*r1)
else:
    print(c2)
    print(*r2)
