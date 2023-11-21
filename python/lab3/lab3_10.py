nums = []

for i in range(1, 10):
    if i % 3 == 0:
        nums.append(i * i)

for n in nums:
    print(n, end = ', ')