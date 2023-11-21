import sys
input = sys.stdin.readline

n = [False, False] + [True] * 1000000

for i in range(2, 1001):
    if n[i]:
        for j in range(i * i, 1000001, i):
            n[j] = False


def goldbach(tc):
    for i in range(2, tc):
        if n[i] and n[tc - i]:
            print(tc, '=', i, '+', tc - i)
            return 0
    return 1


while 1:
    tc = int(input())
    if tc == 0:
        break
    if goldbach(tc):
        print("Goldbach's conjecture is wrong.")