risada = str(input()).lower()

for letter in risada:
    if (letter != 'a' and letter != 'e' and letter != 'i' and
            letter != 'o' and letter != 'u'):
        risada = risada.replace(letter, '')

risada_reverse = risada[::-1]

if (risada == risada_reverse):
    print('S')

else:
    print('N')
