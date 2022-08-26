def is_prime(number: int) -> bool:
    check: list = [2, 3, 5, 7, 11]

    for x in check:
        if number % x == 0:
            return False

    return True


def main():
    primes: list = [2, 3, 5, 7, 11]
    i: int = 12
    while len(primes) < 1000:
        if is_prime(i):
            primes.append(i)
        i += 1

    for prime in primes:
        print(prime)

if __name__ == '__main__':
    main()