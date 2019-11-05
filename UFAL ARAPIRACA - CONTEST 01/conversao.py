N = 0

while (N != -1):
    N = input()

    if (N == '-1'):
        break

    try:
        N = int(N)

        resHex = hex(N)[2:].upper()
        res = '0x' + resHex
        print(res)

    except:
        N = int(N, 16)
        print(N)