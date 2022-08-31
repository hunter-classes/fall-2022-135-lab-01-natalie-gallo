/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1B (smaller3.cpp)

Ask user for three intergers and prints smallest of the three
*/

#include <iostream>

int main()
{
  int num_1;
  int num_2;
  int num_3;

  std::cout << "Enter the first number: \n";
  std::cin >> num_1;
  std::cout << "Enter the second number: \n";
  std::cin >> num_2;
  std::cout << "Enter the third number: \n";
  std::cin >> num_3;

  if (num_1 < num_2 && num_1 < num_3) {
    std::cout << "The smaller of the three is " << num_1 << std::endl;
  } else if (num_2 < num_1 && num_2 < num_3) {
    std::cout << "The smaller of the three is " << num_2 << std::endl;
  } else if (num_3 < num_1 && num_3 < num_2) {
    std::cout << "The smaller of the three is " << num_3 << std::endl;
  }
  return 0;
}
