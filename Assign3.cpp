// Copyright (c) 2022. Daniel Momoh All rights reserved.
// usr/bin/env c++
// Created by : Daniel Momoh
// Created on : Oct 2022
#include <iostream>


int main() {
// Declaration
    char letter;
    int ascii;
// Inputs
    std::cout << "Enter a Character: ";
    std::cin >> letter;
    ascii = letter;
// process
    if (ascii >= 65 && ascii <= 90)
        std::cout << "It is an Uppercase Alphabet";
    else if (ascii >= 97 && ascii <= 122)
        std::cout << "It is a Lowercase Alphabet";
    else
        std::cout << "It is not an Alphabet";
    return 0;
}
