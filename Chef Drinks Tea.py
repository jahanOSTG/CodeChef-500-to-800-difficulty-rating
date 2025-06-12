# cook your dish here
t = int(input())
for x in range(t):
    a, b, c = map(int, input().split())
    if a >= b:
        d = a % b
        if d != 0:
            f = (a // b) + 1
            e = f * c
        else:
            f = a // b
            e = f * c
        print(e)
    else:
        print(c)
