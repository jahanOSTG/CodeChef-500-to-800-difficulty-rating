# cook your dish here
t=int(input())
for x in range(t):
    a,b,c=map(int,input().split())
    d=c%a
    e=c%b
    if d==0 and e!=0:
        print("CHICKEN")
    elif e==0 and d!=0:
        print("DUCK")
    elif e==0 and d==0:
        print("ANY")
    else:
        print("NONE")
