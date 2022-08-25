#include <iostream>
#include <cmath>
#include <string>

int main() {
    printf("Think of a number between 1 and 1000\n");

    int top = 1000;
    int bottom = 0;

    int count = 0;
    while (true) {
        int guess = round((top + bottom) / 2);
        count++;

        printf("My guess is %d\n", guess);
        printf("Was I correct? (h if your number is higher, l if its lower, and c if it is correct)\n");
        std::string str;
        std::getline(std::cin, str);
        
        if (str == "h") {
            bottom = guess;
        } else if (str == "l")
        {
            top = guess;
        } else if (str == "c") {
            std::cout << "I guessed your number in " << count << " guesses!";
            break;
        } else {
            std::cout << "I didn't understand, please try again!\n";
            count--;
        }
        
    }

    return 0;
}