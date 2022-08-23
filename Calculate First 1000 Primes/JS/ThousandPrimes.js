let isPrime = (number) => {
  let check = [2, 3, 5, 7, 11];

  for (let i = 0; i < check.length; i++) {
    const x = check[i];
    if (number % x == 0) {
      return false;
    }
  }

  return true;
};

let primes = [2, 3, 5, 7, 11];

let i = 12;
while (primes.length < 1000) {
  if (isPrime(i)) {
    primes.push(i);
  }

  i += 1;
}

primes.forEach((prime) => {
  console.log(prime);
});
