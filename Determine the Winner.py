# cook your dish here
t=int(input())
for x in range(t):
    a,b,c,d=map(int,input().split())
    e=max(a,b)
    f=max(c,d)
    if e==f:
        print("TIE")
    elif e>f:
        print("Q")
    else:
        print("P")
