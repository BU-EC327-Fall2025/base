#include "lab2_problem1.h"

std::string diagonalStars(int n) {
    std::string result = "";

    if (n < 1) {
        return "Not Support";
    }

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            if (column == 0 && row != 0) {
                result += "\n";
            }
            if (row == column || (row + column + 1) == n) {
                result+= '-';
            } else {
                result += ' ';
            }
        }
    }

    return result;
}