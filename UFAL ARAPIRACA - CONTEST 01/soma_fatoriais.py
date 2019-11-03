sumFatorial = 0

def fatorial(x):
    fat = x
    for j in range(x -1, 1, -1):
        fat *= j

    return fat

while True:
    try:
        m, n = map(int, input().split())

        if (m == 0):
            m = 1
        if (n == 0):
            n = 1
            
        sumFatorial = fatorial(m) + fatorial(n)

        print(sumFatorial)

    except EOFError:
        break