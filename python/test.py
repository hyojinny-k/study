n = []
num = 1
while num > 0:
    num = int(input())
    n.append(num)

prime_list = []
not_prime_list = []


def is_prime(n):
    if n in prime_list:
        return 1
    if n in not_prime_list:
        return 0

    if n == 1:
        not_prime_list.append(n)
        not_prime_list.sort()
        return 0
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            not_prime_list.append(n)
            not_prime_list.sort()
            return 0
    prime_list.append(n)
    prime_list.sort()
    return 1


for i in n:
    success = 0
    if i % 2 == 0 and i >= 6:
        for j in range(3, int(i / 2) + 1, 2):
            if is_prime(j) == 1:
                if is_prime(i - j) == 1:
                    print(i, '=', j, '+', i - j)
                    success = 1
                    break
        if success == 0:
            print("Goldbach's conjecture is wrong.")