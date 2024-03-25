#include "Date.h"
#include <sstream>
using namespace std;
 //array that holds total number of days in each month

const int Date::monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30,31};
Date::Date() : days_(0),month_(1),day_(1) {
 

}
//function to support the display of a date object
//this function sends a message about the date object to the output stream
ostream& operator<<(ostream& out, const Date& date){
  //output month and day of specific date
  out <<"The date " << date.month_ << "/" << date.day_;
  //initialize totalDays variable with specific date
  int totalDays = date.day_;
  //this loop iterates through the months before the specific month
  for(int i=0; i<date.month_-1; i++){
    totalDays += Date::monthDays[i];
  }
   //for each month we add the number of days in that month to totalDays
  totalDays += date.days_;
  //output the total number of days since the beginning of the year
  out << " is " << totalDays - 1 << " day(s) from January 1" << endl;
  return out;
}
//function to support the assignment from a string on the right to a Date object on the left. 
Date& Date::operator=(const string date){
stringstream ss(date);
  char slash;
  ss >> month_ >> slash >> day_;
  return *this;

}
//this function to support the comparison between a date object on the left and a string on the right in format "M/D"
//return true if the date on the left has a later date than the string object on the right
bool Date::operator>=(const string date) const {
 //parse the string into month and day
  stringstream ss(date);
  char slash;
  int compareMonth, compareDay;
  ss >> compareMonth >> slash >> compareDay;
  //compare date object with parsed month and day
  return ( month_ > compareMonth || (month_ == compareMonth && day_ >= compareDay));
}
  //
  bool Date::operator<=(const string date) const{
    //parse the string into month and day
    stringstream ss(date);
    char slash;
    int compareMonth, compareDay;
    ss >> compareMonth >> slash >> compareDay;
    //compare date object with parsed month and day
    return ( month_ < compareMonth || (month_ == compareMonth && day_ <= compareDay));
  
}