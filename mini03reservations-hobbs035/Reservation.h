#ifndef RESERVATION_H
#define RESERVATION_H
#include <iostream>
#include <string>
#include "Date.h"
class Reservation{
private:

Date reservationDate_;
float reservationFee_;
protected:
string reservationName_;
//bool is_high_season() const;
public:
Reservation(const string &reservationName, int day, int month, float fee = 0);
double caclulate_cost() const;
virtual string to_string() const;
bool is_high_season() const;
//protected:
//Date get_reservation_date() const{
//  return reservationDate_;}


};
#endif