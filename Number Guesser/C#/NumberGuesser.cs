using System;
using System.Collections;
using System.Collections.Generic;

namespace NumberGuesser
{
    class Guesser
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Think of a number between 1 and 1000");

            var top = 1000;
            var bottom = 0;

            var count = 0;
            while (true) {
                var guess = (int)Math.Round((Double)((top + bottom) / 2));
                count++;

                Console.WriteLine("My guess is " + guess);
                Console.WriteLine("Was I correct? (h if your number is higher, l if its lower, and c if it is correct)");
                var correct = Console.ReadKey();

                if (correct.Key.ToString() == "H") {
                    bottom = guess;
                } else if (correct.Key.ToString() == "L") {
                    top = guess;
                } else if (correct.Key.ToString() == "C") {
                    Console.WriteLine("I guessed your number in " + count + " guesses!");
                    break;
                } else {
                    Console.WriteLine("I didn't understand, please try again!");
                    count--;
                }
            }
        }
    }
}