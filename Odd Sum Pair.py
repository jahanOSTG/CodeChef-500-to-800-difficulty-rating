# cook your dish here
t = int(input())
for x in range(t):
    a, b, c = map(int, input().split())

    # Check if any pair has an odd sum
    if (a + b) % 2 == 1 or (b + c) % 2 == 1 or (c + a) % 2 == 1:
        print("YES")
    else:
        print("NO")
