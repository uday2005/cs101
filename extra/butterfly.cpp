#include <simplecpp>

main_program {
    int n = 7;           // Total number of stars in the bottom row
    int n1 = n / 2;      // Number of rows in the top half of the pattern

    // Top half of the pattern
    for (int i = 1; i <= n1; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }

        // Print spaces in the middle
        for (int p = 1; p <= (2 * (n1 - i) + 1); p++) {
            std::cout << "  ";
        }

        // Print right stars
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    // Bottom row of stars
    for (int m = 1; m <= n; m++) {
        std::cout << "* ";
    }
    std::cout << std::endl;

       for (int i = n1; i >= 1; i--) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }

        // Print spaces in the middle
        for (int p = 1; p <= (2 * (n1 - i) + 1); p++) {
            std::cout << "  ";
        }

        // Print right stars
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }




}
