/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1D (month.cpp)

This program asks the user to input the year and the month (1-12) and prints the
number of days in that month (taking into account leap years).
*/

#include <iostream>

int main() {
  int year;
  int month;

  int year_type;
  int month_days;

  std::cout << "Enter year: \n";
  std::cin >> year;

  std::cout << "Enter month: \n";
  std::cin >> month;

  // if month = 1, 3, 5, 7, 8, 10, 12, then 31 days
  // if month = 4, 6, 9, 11, then 30 days
  // else 28 days (29 for leap years)

  // identify if leap year or common year
  // if leap year, 0.
  // if common year, 1.
  
   if (year % 4 != 0) {
    year_type = 1;
  } else if (year % 100 != 0) {
    year_type = 0;
  } else if (year % 400 != 0) {
    year_type = 1;
  } else {
    year_type = 0;
  }

  //31 days
  if (month == 1) {
    month_days = 31;
  } 
  if (month == 3) {
    month_days = 31;
  }
  if (month == 5) {
    month_days = 31;
  }
  if (month == 7) {
    month_days = 31;
  }
  if (month == 8) {
    month_days = 31;
  }
  if (month == 10) {
    month_days = 31;
  }
  if (month == 12) {
    month_days = 31;
  }

  //30 days
  if (month == 4) {
      month_days = 30;
  } 
  if (month == 6) {
      month_days = 30;
  } 
  if (month == 9) {
      month_days = 30;
  } 
  if (month == 11) {
      month_days = 30;
  }
  
  // common year
  if (month == 2 && year_type == 1){
    month_days = 28;
  }
  // leap year
  if (year_type == 0){
    if (month == 2){
      month_days = 29;
    }
  }
  
  std::cout << month_days << " days\n";  
  return 0;
}
