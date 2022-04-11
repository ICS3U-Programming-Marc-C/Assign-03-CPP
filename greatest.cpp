// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April, 2022
// This program finds the greatest number based on user's input

#include <iostream>
#include "colors.h"


int main() {
       
       
    // Declaring variables
    std::string userInput1;
    std::string userInput2;
    std::string userInput3;
    float userInputNew1;
    float userInputNew2;
    float userInputNew3;
    // Greeting message
    std::cout << BOLDMAGENTA << "This program finds the greatest number based on your inputs. ";
    std::cout << BOLDMAGENTA << "Decimals are allowed.\n";

    // user's input
    std::cout << BOLDMAGENTA << "Enter a number: ";
    std::cin >> userInput1;
    
    std::cout << BOLDMAGENTA << "Enter a number: ";
    std::cin >> userInput2;
    
    std::cout << BOLDMAGENTA <<"Enter a number: ";
    std::cin >> userInput3;
    
    try {
      // convert the user's guess to an float
      userInputNew1 = std::stof(userInput1);
      userInputNew2 = std::stof(userInput2);
      userInputNew3 = std::stof(userInput3);

      // check if the guess is correct
      } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << "Invalid input.\n";
      std::exit( EXIT_FAILURE );
}
    
    // Checking if user can date grandchild
    if (userInputNew1 > userInputNew2 && userInputNew1 > userInputNew3) {
    std::cout <<BOLDMAGENTA << userInputNew1 << " is the greatest.\n";
}   else if (userInputNew2 > userInputNew1 && userInputNew2 > userInputNew3) {
    std::cout << BOLDMAGENTA <<userInput2 << " is the greatest.\n";
}   else if (userInputNew3> userInputNew2 && userInputNew3 > userInputNew1) {
    std::cout << BOLDMAGENTA << userInputNew3 << " is the greatest.\n";
}   else if (userInputNew1 == userInputNew2 && userInputNew1 > userInputNew3) {
    std::cout << BOLDMAGENTA << userInput1 << " is the greatest.\n";
}   else if (userInputNew1 == userInputNew3 && userInputNew1 > userInputNew2) {
    std::cout << BOLDMAGENTA << userInputNew1 << " is the greatest.\n";
}   else if (userInputNew2 == userInputNew3 && userInputNew2 > userInputNew1) {
    std::cout << BOLDMAGENTA << userInputNew2 << " is the greatest.\n";
}   else {
    std::cout << "All numbers are equal. No greatest.\n";
}

}
