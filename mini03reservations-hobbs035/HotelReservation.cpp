#include "HotelReservation.h"
#include "Reservation.h"
#include "Date.h"
#include <iostream>
#include <string>
// This constructor is to create a new HotelReservation object using the parameters provided.

HotelReservation::HotelReservation(const string &reservationName, int day, int month, const string &hotelName, double costPerNight, int nights) : Reservation(reservationName,day,month),hotelName_(hotelName),costPerNight_(costPerNight),nights_(nights) {
  
}
// This function is to override the to_string function in the base class and return a string explaining the invoking HotelReservation object
string HotelReservation::to_string() const{
  // Call the base class's to_string function to get the reservation info
  string baseInfo = Reservation::to_string();

  // Combine the base info with details for HotelReservation
  string result = baseInfo + " at " + hotelName_ + " for " + std::to_string(nights_) + " night(s)";
  return result;
}
//  This function is to override the calculate_cost function in the base class and return the reservation cost as follows: If the reservation is made during the high season, then the function shall return the product of the cost per night, the number of nights, and a surcharge of 50%. Otherwise, the function shall return the product of the cost per night and the number of nights.
double HotelReservation::calculate_cost() const{
  // Check if the reservation is during the high season
  if (is_high_season()){
    // Apply a surcharge of 50%
    return (costPerNight_ * nights_) * 1.5;
  }else{
    // No surcharge, return the product of cost per night and nights
    return costPerNight_ * nights_;
  }
}
