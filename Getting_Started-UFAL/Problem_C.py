# Overflow

max_number = int(input())
number_1, operator, number_2 = input().split(' ')

number_1, number_2 = int(number_1), int(number_2)

if (operator == '+'):
    result = number_1 + number_2
elif (operator == '*'):
    result = number_1 * number_2

if (result > max_number):
    print('OVERFLOW')

else:
    print('OK')
