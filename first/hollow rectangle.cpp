#include <iostream>

int main() {
    int rows, columns;

    // Get the number of rows and columns from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for the number of columns
        for (int j = 1; j <= columns; ++j) {
            // Check if it's the first or last row, or the first or last column
            if (i == 1 || i == rows || j == 1 || j == columns) {
                // Print asterisk for the first and last rows, and first and last columns
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


