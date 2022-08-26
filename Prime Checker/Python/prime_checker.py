def is_prime(number):
    check = [2, 3, 5, 7, 11]

    for x in check:
        if number % x == 0:
            return False

    return True

def get_input():
    inp = input("What number do you want to check?\n")
    try:
        value = int(input)
        if (is_prime(value)):
            print("Your number is prime!")
        else:
            print("Your number is not prime!")
    except:
        print("Please enter a valid number!")
        get_input()
        return
    
    again = input("Do you want to check another number? [Y/n]\n")

    if (again != "n"):
        get_input()