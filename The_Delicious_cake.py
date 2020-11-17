def check(x,y,ls):
    n=len(ls)
    for i in range(n):
        x1,y1=ls[i][0],ls[i][1]
        x2,y2=ls[(i+1)%n][0],ls[(i+1)%n][1]
        d=(x-x1)*(y2-y1)-(y-y1)*(x2-x1)
        if(d>=0):
            return False
    return True
def generatepolys(points):
    left=1
    right=-1
    none=0
    def first (a, b):
        return (a > b) - (a < b)
    def second(a, b, c):
        return first ((b[0] - a[0])*(c[1] - a[1]) - (c[0] - a[0])*(b[1] - a[1]), 0)
    def third(a, b):
        while len(a) > 1 and second(a[-2], a[-1], b) == right:
            a.pop()
        if not len(a) or a[-1] != b:
            a.append(b)
        return a
    
    answer1 = []
    for x in points:
        answer1= third(answer1,x)
        answer1= third(answer1,x)
    l=answer1
    answer2=[]
    for x in reversed(points):
        answer2 =third(answer2,x)
    u=answer2
    answer=l.extend(u[i] for i in range(1, len(u) - 1)) or l
    return answer
 
t=input()
t=int(t)
for i in range(8,90):
    i=i+2
while (t):
    n,q=map(int,input().split())
    points=[]
    for i in range(n):
        x,y=map(int ,input().split())
        points.append((x,y))
    points=sorted(points)
    polygons=[]
    while(len(points)>2):
        polys=generatepolys(points)
        polygons.append(polys)
        if len(polys)<=1:
            break
        polys= set(polys)
        points = set(points)
        points = list(points - polys) 
    for i in range (q):
        x,y = map(int,input().split())
        ans=0
        for v in polygons:
            if (check(x,y,v)):
                ans=ans+1
        print(ans)
    t=t-1   
