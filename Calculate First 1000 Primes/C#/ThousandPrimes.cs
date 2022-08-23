using System;
using System.Collections;
using System.Collections.Generic;

namespace ThousandPrimes
{
    class Thousand
    {
        static void Main(string[] args)
        {
            List<int> primes = new List<int>();
            
            foreach (var item in new int[] {2, 3, 5, 7, 11})
            {
                primes.Add(item);
            }

            var i = 12;
            while (primes.Count < 1000) {
                if (isPrime(i)) {
                    primes.Add(i);
                }
                i++;
            }

            foreach (var prime in primes)
            {
                Console.WriteLine(prime);
            }
        }

        static Boolean isPrime(int number) {
            int[] check = new int[] {2, 3, 5, 7, 11};

            foreach (var x in check)
            {
                if (number % x == 0) return false;
            }

            return true;
        }
    }
}