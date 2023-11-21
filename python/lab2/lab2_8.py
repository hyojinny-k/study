memo = []


def fib_opt(n):
    if n <= 2:
        return 1
    if memo[n - 1] == 0:
        memo[n - 1] = fib_opt(n - 1)
    if memo[n - 2] == 0:
        memo[n - 2] = fib_opt(n - 2)
    return memo[n - 1] + memo[n - 2]


num = int(input())
for i in range(0, num):
    memo.append(0)
print(fib_opt(num))