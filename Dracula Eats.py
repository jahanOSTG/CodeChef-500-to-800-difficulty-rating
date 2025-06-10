# cook your dish here
# Dracula's Favorite Meal Counter

T = int(input())  # Number of test cases

for _ in range(T):
    N = int(input())  # Number of spooky days
    if N < 2:
        print(0)
    else:
        print((N - 2) // 7 + 1)
