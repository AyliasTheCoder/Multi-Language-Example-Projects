print("Think of a number between 1 and 1000")

top: int = 1000
bottom: int = 1


count: int = 0
while True:
    guess: int = (top + bottom) // 2

    print("My guess is ", str(guess))
    correct: str = input("Was I correct? (h if your number is higher, l if its lower, and c if it is correct)\n")

    count += 1

    if correct == 'h':
        bottom = guess
    elif correct == 'l':
        top = guess
    elif correct == 'c':
        print("I guessed your number in", count, "guesses!")
        break
    else:
        print("I didn't understand, please try again!")
        count -= 1
