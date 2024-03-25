#include "Reservation.h"
#include "Date.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
// this function is to creat a reservation object by settingg the  data members using the parameters
 Reservation::Reservation(const string &reservationName, int day, int month, float fee) :reservationDate_(),reservationFee_(fee),reservationName_(reservationName){
  reservationDate_ = std::to_string(month) + "/" + std::to_string(day);

}
//this function is to return a string explaining the invoking Reservation object
string Reservation::to_string() const{
  // Return a string
  stringstream ss;
  // Send date object to the output stream
  ss << reservationDate_;
  // Extract part of the date into a string variable
  string dateOnly;
  getline(ss, dateOnly);
  //  the result string
  string result = reservationName_ + " on " + dateOnly;
  return result;
  
}
//this function returns true if the reservationData_ data member of the invoking object is later than the reservationData_ data member of the parameter object
bool Reservation::is_high_season() const{
  // Check if the month is in the high season
  string highSeasonStart = "12/20";
  string highSeasonEnd = "1/6";
  //return true if the invoking object's reservationData_ is later than the parameter object's reservationData_
  return (reservationDate_ >= highSeasonStart || reservationDate_ <= highSeasonEnd);
}