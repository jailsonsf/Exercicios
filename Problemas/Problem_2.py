# Medalhas

athlete_1 = int(input())
athlete_2 = int(input())
athlete_3 = int(input())

podium = []

if (athlete_1 < athlete_2 and athlete_1 < athlete_3):
    podium.append(1)

    if(athlete_2 < athlete_3):
        podium.append(2)
        podium.append(3)
    else:
        podium.append(3)
        podium.append(2)

elif (athlete_2 < athlete_1 and athlete_2 < athlete_3):
    podium.append(2)

    if(athlete_1 < athlete_3):
        podium.append(1)
        podium.append(3)
    else:
        podium.append(3)
        podium.append(1)

elif (athlete_3 < athlete_1 and athlete_3 < athlete_2):
    podium.append(3)

    if(athlete_1 < athlete_2):
        podium.append(1)
        podium.append(2)
    else:
        podium.append(2)
        podium.append(1)

print(podium[0])
print(podium[1])
print(podium[3])
