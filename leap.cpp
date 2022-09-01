/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1C (leap.cpp)

This program asks the user to input an integer representing a year number (1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.
*/

#include <iostream>

int main()
{
  int year;

  std::cout << "Enter year: \n";
  std::cin >> year;
  
  if (year % 4 != 0){
    std::cout << "Common year\n";
  } else if (year % 100 != 0){
    std::cout << "Leap year\n";
  } else if (year % 400 != 0){
    std::cout << "Common year\n";
  } else {
    std::cout << "Leap year\n";
  }
  return 0;
}
  
