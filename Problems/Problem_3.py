# Gincana


def mdc(a, b):
    while b > 0:
        r = a % b
        a, b = b, r

    return a


N, M = map(int, input().split(' '))

X = M
while mdc(N, X) > 1:
    X -= 1

print(X)
