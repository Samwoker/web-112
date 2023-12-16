#include <iostream>

int main() {
    int rows;

    // Get the number of rows from the user
    std::cout << "Enter the number of rows for the inverted hollow full pyramid: ";
    std::cin >> rows;

    // Outer loop for the number of rows
    for (int i = rows; i >= 1; --i) {
        // Inner loop for printing leading spaces
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << "  ";
        }

        // Inner loop for printing asterisks or spaces
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                // Print asterisk for the first and last columns or the last row
                std::cout << "* ";
            } else {
                // Print space for the inner area
                std::cout << "  ";
            }
        }

        // Move to the next line after printing each row
        std::cout << std::endl;
    }

    return 0;
}

