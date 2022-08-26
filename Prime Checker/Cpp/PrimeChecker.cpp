#include <iostream>
#include <string>
#include <stdexcept>

bool isPrime(int number) {
    int check[5] = {
        2,
        3,
        5,
        7,
        11
    };

    for (int x : check) {
        if (number == x) {
            return true;
        }
        if (number % x == 0) {
            return false;
        }
    }

    return true;
}

int stringToInt(std::string str) {
    int multiplier = 1;
    int sum = 0;
    for(int i = str.size() - 1;i >= 0; i--)
    {
        switch(str[i])
        {
            case '0':
                sum += 0;
                break;
            case '1':
                sum += 1 * multiplier;
                break;
            case '2':
                sum += 2 * multiplier;
                break;
            case '3':
                sum += 3 * multiplier;
                break;
            case '4':
                sum += 4 * multiplier;
                break;
            case '5':
                sum += 5 * multiplier;
                break;
            case '6':
                sum += 6 * multiplier;
                break;
            case '7':
                sum += 7 * multiplier;
                break;
            case '8':
                sum += 8 * multiplier;
                break;
            case '9':
                sum += 9 * multiplier;
                break;
            case '-':
                sum *= -1;
                break;
            case ' ':
                continue;
            default:
                throw std::invalid_argument( "received invalid number" );
        }
        multiplier *= 10;
    }

    return sum;
}

void getInput() {
    std::cout << "What number do you want to check?\n";
    std::string str;
    std::getline(std::cin, str);

    try {
        int value = stringToInt(str);
        if (isPrime(value)) {
            std::cout << "Your number is prime!\n";
        } else {
            std::cout << "Your number is not prime!\n";
        }
    } catch (const std::exception& e) {
        std::cout << "Please enter a valid number!\n";
        getInput();
        return;
    }

    std::cout << "Would you like to check another number? [Y/n]\n";
    std::getline(std::cin, str);

    if (str != "n") {
        getInput();
    }
}

int main() {
    getInput();

    return 0;
}