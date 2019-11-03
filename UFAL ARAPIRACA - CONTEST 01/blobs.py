tests = int(input())

for i in range(tests):
    c = float(input())

    days = 0
    while (c > 1):
        c /= 2
        days += 1

    print('{} dias'.format(days))
    