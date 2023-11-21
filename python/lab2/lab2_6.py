def max(*nums):
    x = 0
    for n in nums:
        if x < n:
            x = n
    return x


print(max(1, 4, 6))
print(max(10, 5, 87, 57, 38))
print(max(4, 3, 2, 1))
