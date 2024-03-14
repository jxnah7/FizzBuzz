#include <iostream>

int main() {
    for (int i = 1; i <= 100; i++) 
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0) {
            std::cout << "Fizz\n";
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz\n";
        }
        else if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        }
        else {
            std::cout << i << "\n";
        }

}

/*
you have to write a program that prints the numbers from 1 to 100. 
However, for multiples of 3, you should print "Fizz" instead of the number, and for multiples of 5, you should print "Buzz" instead of the number.
For numbers which are multiples of both 3 and 5, you should print "FizzBuzz"
*/
