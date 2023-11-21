n = [False, False] + [True] * (1000000 - 1)
primes = []

for i in range(2, 1000001):
    if n[i]:
        primes.append(i)
        for j in range(i * 2, 1000001, i):
            n[j] = False

tc = 1
while True:
    tc = int(input())
    if tc == 0:
        break
    for p in range(1, len(primes)):
        if tc - primes[p] in primes:
            print(tc, '=', primes[p], '+', tc - primes[p])
            break