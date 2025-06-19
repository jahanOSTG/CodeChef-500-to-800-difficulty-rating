# cook your dish here
t=int(input())
for x in range(t):
    x,y,a,b=map(int,input().split())
    if (x in (a, b)) and (y in (a, b)):
        print("0")
    elif (x in (a, b)) or (y in (a, b)):
        print("1")
    else:
        print("2")
