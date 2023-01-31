/*
 * C++ Program to demonstrate the use of arrays.
 *
 * compile and run with with: 
       clang++ -std=c++17 -Wall -Wextra -pedantic -c arrays.cpp
       clang++ -o arrays arrays.o
       ./arrays
 *
 * Your task:
 *    - Compile and run the program.
 *    - Read the code and understand what it does.
 *    - Change array access to use the * operator instead of [].
 *        - Remember the form a[i] is equvalent to *( ... ) <- figure it out
 *        - Compile, link and run it to check it works the same.
 *        - Change it back after.
 *    - Change the for loop to incorrectly use <= instead of <
 *        - Why is this "illegal" in C++'s world?  Results in...
 *        - BEFORE you run it, speculate about what will happen with partner(s)
 *        - Compile, link and run it.
 *        - What is *so* bad about this?
 *        - WHat is *good* about it?
 *    - Run the program with using valgrind:   valgrind ./arrays
 *        - Did this help?
 *    - Rerun clang commands adding: -fsanitize=undefined,address,bounds
 *        - Add this option to the very front of BOTH clang++ commands
 *        - Did this help?
 */

#include <iostream>
#include <cstddef>

int main() {
    constexpr size_t ARRAY_SIZE = 8;
    int x = 42;
    int numbers[ARRAY_SIZE];
    int y = 54;

    for (size_t i = 0; i <= ARRAY_SIZE; ++i) {
        numbers[i] = int(i) + 100;
    }

    for (size_t j = 0; j <= ARRAY_SIZE; ++j) {
        std::cout << "Element at index " << j << " : "
                  << numbers[j] << std::endl;
    }
    std::cout << "x == " << x << ", y == " << y << std::endl;

    return 0;
}