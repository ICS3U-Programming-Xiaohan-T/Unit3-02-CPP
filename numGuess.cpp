// Copyright (c) 2025 Xiaohan All rights reserved.
//
// Created by: Xiaohan
// Created on: Mar 2025
// This program checks if users guessed the right numbers

#include <iostream>
int main() {
    // this function checks if the guessed number is correct
    const int CORRECT_NUMBER = 7;
    int guessedNumber;

    // get input of guessed number from users
    std::cout << "Enter the number you guess between 1 to 9 ";
    std::cin >> guessedNumber;
    std::cout << "" << std::endl;

    // the process of guessing numbers
    if (guessedNumber != CORRECT_NUMBER) {
    // display the result to users
        std::cout << "You guess is incorrect!";
    } else {
        // display the result to users
        std::cout << "You guess is correct!";
    }
}
