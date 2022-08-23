fun main() {
    val primes = mutableListOf<Int>(2, 3, 5, 7, 11)

    var i = 12;
    while (primes.size < 1000) {
        if (isPrime(i)) {
            primes.add(i)
        }
        i++;
    }

    for (x in primes) {
        print(x)
    }
}

fun isPrime(number: Int): Boolean {
    val check = intArrayOf(2, 3, 5, 7, 11)

    for (x in check) {
        if (number % x == 0) {
            return false;
        }
    }
    return false;
}