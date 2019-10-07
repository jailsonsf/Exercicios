# Campo Minado

field_size = int(input())

mines = []
response = []

for i in range(0, field_size):
    aux = int(input())
    mines.append(aux)

for i in range(field_size):

    count = 0

    if (i != 0):
        if (mines[i - 1] == 1):
            count += 1

    if (mines[i] == 1):
        count += 1

    if (i < field_size - 1):
        if (mines[i + 1] == 1):
            count += 1

    response.append(count)

for value in response:
    print(value)
