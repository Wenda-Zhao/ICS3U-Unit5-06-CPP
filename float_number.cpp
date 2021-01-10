// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for float number

#include <iostream>
#include <cmath>

float Calculate(float number_float, int decimal_place_int) {
    // This function is for calculate

    float number_float_after;

    // process
    number_float_after = number_float * pow(10, decimal_place_int);
    number_float_after = number_float_after + 0.5;
    number_float_after = std::stoi(number_float_after);
    number_float_after = number_float_after/pow(10, decimal_place_int);

    return number_float_after;
}


int main() {
    // This function is for input

    std::string number;
    std::string decimal_place;
    int decimal_place_int;
    float number_float;
    float number_final = -1;

    // input
    std::cout << "Enter a decimal number:";
    std::cin >> number;
    std::cout << "How many decimal place do you want?";
    std::cin >> decimal_place;

    try {
        number_float = std::stof(number);
        try {
            decimal_place_int = std::stoi(decimal_place);
            // call function
            number_final = Calculate(number_float, decimal_place_int);
        } catch (std::invalid_argument) {
            std::cout << "decimal place is not a integer" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "number is not a decimal" << std::endl;
    }

    // output
    if (number_final == -1) {
        std::cout << "-1";
    } else {
        std::cout << number_final;
    }
}
