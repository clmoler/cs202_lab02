// Chariety Moler
// file: SchoolClass.cpp
// 30 January 2023
// This file should further define all of the functions. 

#include <iostream>
#include "SchoolClass.h"

SchoolClass::SchoolClass(string name, vector<int> time, int days, int credits, string subject, string building) {
  class_name = " ";
  time_of_class = " ";
  days_of_week = 0;
  number_of_credits = 0;
  subject_of_class = " ";
  location = " ";
}

SchoolClass::SchoolClass(string name, vector<int> time, int days, int credits, string subject, string building) {
  class_name = name;
  time_of_class = time;
  days_of_week = days;
  number_of_credits = credits;
  subject_of_class = subject;
  location = building;
}

std::string SchoolClass::getName() const {
  return class_name;
}

std::string SchoolClass::getTime() const {
  return time_of_class;
}

std::string SchoolClass::getDays() const {
  return days_of_week;
}

std::string SchoolClass::getCredits() const {
  return number_of_credits;
}

std::string SchoolClass::getSubject() const {
  return subject_of_class;
}

std::string SchoolClass::getBuilding() const {
  return location;
}
  
  
