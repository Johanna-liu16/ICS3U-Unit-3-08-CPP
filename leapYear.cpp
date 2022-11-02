// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string stringYear;
    int intYear;

    // input
    std::cout << "This program identifies a leap year."<< std::endl;
    std::cout << "Enter a year: ";
    std::cin >> stringYear;

    // process and output
    try {
        intYear = std::stoi(stringYear);

        if (intYear < 0) {
            std::cout << "Invalid year";
        } else {
            if (intYear % 4 == 0 || intYear % 400 == 0) {
                if (intYear % 100 == 0 and intYear % 400 != 0) {
                    std::cout << "This is not a leap year";
                } else {
                    std::cout << "This is a leap year.";
                }
            } else {
                std::cout << "This is not leap year.";
                }
        }
    } catch (std::invalid_argument) {
            std::cout << "Invalid Integer.";
        }

    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
