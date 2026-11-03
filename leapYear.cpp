// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 01,11,2026
// This program calculate whether a given
// year is a leap year using a formula

#include <iostream>
#include <string>

int main() {
    // declare variables
    int yearInt;
    std::string yearStr;
    // get the user's year input
    std::cout <<"Enter the year: ";
    std::cin >> yearStr;

    // check if it is a valid input
    try {
        yearInt = std::stoi(yearStr);
        // check if year is a leap year
        if (yearInt % 4 == 0) {
            if (yearInt % 100 == 0) {
                if (yearInt % 400 == 0) {
                    std::cout << yearInt <<" is a leap year";
                } else {
                    std::cout << yearInt <<" is not a leap year";
                }

            } else {
                std::cout << yearInt <<" is a leap year";
            }
        } else {
            std::cout << yearInt <<" is not a leap year";
        }
    } catch (std::invalid_argument) {
        std::cout << yearStr <<" is not a valid input";
    }
}
