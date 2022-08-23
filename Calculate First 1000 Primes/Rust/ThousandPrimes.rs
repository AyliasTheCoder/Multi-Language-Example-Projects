fn main() {
    let mut primes = Vec::new();
    primes.push(2);
    primes.push(3);
    primes.push(5);
    primes.push(7);
    primes.push(11);

    let mut i: i32 = 12;
    while primes.len() < 1000 {
        if is_prime(i) {
            primes.push(i);
        }

        i += 1;
    }

    for x in primes {
        println!("{}", x)
    }
}

fn is_prime(number: i32) -> bool {
    let check: [i32; 5] = [2, 3, 5, 7, 11];

    for x in check {
        if number % x == 0 {
            return false;
        }
    }

    return true;
}