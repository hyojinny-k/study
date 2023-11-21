for i in range(2, 12):
    for j in range(i, 11):
        print(' ', end='')
    for j in range(1, i):
        print('*', end='')
    print('')