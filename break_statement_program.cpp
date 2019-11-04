// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on November 2019
// this program uses a for loop
// To calculate squares from 0 to a given number


#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */

int main() {
  int randomNbr, userGuess;

  std::cout << "i'm thinking of a number between 1 and 100" << std::endl;

  /* generate secret number between 1 and 100: */
  randomNbr = rand() % 100 + 1;

  std::cout << "Guess my number: ";
  std::cin >> userGuess;

  while (userGuess != randomNbr) {
      try {
        if (userGuess < randomNbr) {
          std::cout << "The secret number is higher, please try again:";
          std::cin >> userGuess;
        }
        else if (userGuess > randomNbr) {
          std::cout <<  "The secret number is lower, please try again:";
          std::cin >> userGuess;
        }
        else {
          break;
        }
      }
      catch (const char * str){
        std::cout << "invalid entry was entered";
      }
    std::cout <<  "Congratulations, you have found the number!";

  }
}
