from cs50 import get_float

dollars = 0
nr = 0

while (dollars <= 0):
    dollars = get_float("Change owed: ")

cents = round(dollars * 100, 0)

while (cents > 0):
    if (cents >= 25):
        cents -= 25
        nr += 1
    elif (cents >= 10):
        cents -= 10
        nr += 1
    elif (cents >= 5):
        cents -= 5
        nr += 1
    else:
        cents -= 1;
        nr += 1

print(nr)
