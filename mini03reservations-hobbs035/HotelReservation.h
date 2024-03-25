#ifndef HOTEL_RESERVATION_H
#define HOTEL_RESERVATION_H

#include "Reservation.h"
#include "Date.h"
#include <iostream>
#include <string>

class HotelReservation : public Reservation {
private: 
string hotelName_;
double costPerNight_;
int nights_;
public:
HotelReservation(const string &reservationName, int day, int month, const string &hotelName, double costPerNight, int nights);
 double calculate_cost() const;
virtual string to_string() const override;
};
#endif