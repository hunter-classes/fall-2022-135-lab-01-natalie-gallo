/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1A (smaller.cpp)

Asks user for two numbers and prints smaller of the two.
*/

#include <iostream>

int main()
{
  int num_1;
  int num_2;

  std::cout << "Enter the first number: \n";
  std::cin >> num_1;
  std::cout << "Enter the second number: \n";
  std::cin >> num_2;

  if (num_1 < num_2) {
    std:: cout << "The smaller of the two is " << num_1 << std::endl;
  } else {
    std::cout << "The smaller of the two is " << num_2 << std::endl;
  }
  return 0;
}
  
