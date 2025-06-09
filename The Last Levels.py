# cook your dish here
t=int(input())

for a in range(t):
    x,y,z=map(int,input().split())
    if x<=3:
        print(x*y)
    else:
        b=abs((x-1)//3)
        c=(x*y)+ (z*b)
        print(c)
