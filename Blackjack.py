# cook your dish here
t=int(input())
for x in range(t):
    a,b=map(int,input().split())
    c=21-(a+b)
    if c<=10:
        print(c)
    else:
        print(-1)
