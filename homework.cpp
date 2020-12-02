// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a  "Positive / Negative / 0" program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <cmath>

int main() {
  // This is the function to play the "Positive/Negative/0" program.

  int userInput;

  // input
  std::cout << "Enter a number you want to check" << std::endl;
  std::cin >> userInput;
  std::cout << "" << std::endl;

  // process + output
  if (userInput < 0) {
      std::cout << "It is a negative number" << std::ends;
  } else if (userInput > 0) {
      std::cout <<"It is a positive number" << std::ends;
  } else {
      std::cout <<"It is 0" << std::ends;
  }
}
