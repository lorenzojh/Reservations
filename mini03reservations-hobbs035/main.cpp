#include <iostream>
#include "Date.h"
#include "Reservation.h"
#include "HotelReservation.h"
using namespace std;
int main() {
  Date d1, d2,d3,d4,d5;
  d1 = "1/1"; 
  d2 = "3/15";
  d3 = "6/30";
  d4 = "9/1";
  d5 = "12/31";
  cout << d1 << endl;
  cout << d2 << endl;
  cout << d3 << endl;
  cout << d4 << endl;
  cout << d5 << endl;
  // <= operator test cases
  Date today;
  today = "9/26";
  cout << boolalpha;
  cout << "Today is 9/26" << endl;
  // date object and string represent same month and day
  cout << "today <= 9/26 returns " << (today <= "9/26") << endl; 
  //date object and string represent two different days in the same month and result is true
  cout << "today <= 9/30 returns " << (today <= "9/30") << endl;
  //date object and the string represent two different days in the same month and the result is false
  
  cout << "today <= 9/24 returns " << (today <= "9/24") << endl;
  
  //same day but different months , and the result is false
  cout << "today <= 8/26 returns " << (today <= "8/26") << endl;
  
  //same day but different months, and the result is true
  cout << "today <= 10/26 returns " << (today <= "10/26") << endl;
  
 // different day and month and the result of the comparison is true.
  cout << "today <= 10/10 returns " << (today <= "10/10") << endl;

// different day and month and the result of the comparison is false.
cout << "today <= 8/10 returns " << (today <= "8/10") << endl;
  Reservation R1("Valentines Day Reservation",14, 2, 20);
  cout << "\nReservation Details: " << endl;
  cout << R1.to_string() << endl;
  Reservation R2("Christmas Day Reservation", 25, 12, 30);
  cout << "\nReservation Details: " << endl;
  cout << R2.to_string() << endl;
//reservation objects testing based on high season or not
  Reservation res1("Before December 20", 12, 2, 20);
  Reservation res2("After December 20", 25, 12, 30);
  Reservation res3("Before January 4", 1, 1, 20);
 if(res1.is_high_season()){
   cout << "res1 12/2 is a high season reservation\n" << endl;
 }else{
   cout << "res1 12/2 is not a high season reservation\n" << endl;
 }
  if(res2.is_high_season()){
    cout << "res2 12/25 is a high season reservation\n" << endl;
  }else{
    cout << "res2 12/25 is not a high season reservation\n" << endl;
  }
  if(res3.is_high_season()){
    cout << "res3 1/1 is a high season reservation\n" << endl;
  }else{
    cout << "res3 1/1 is not a high season reservation\n" << endl;
  }
  // creating two different HotelReservation objects and use the to_string function to help generate sample output.
  HotelReservation hotelreservation("Hotel Reservation", 14, 2, "Conrad Hilton", 999.0, 1 );
  cout << "Hotel Reservation Details: " << endl;
  cout << hotelreservation.to_string() << endl;
  //calculate cost of the hotel reservation
  cout << "Total cost: $" << hotelreservation.calculate_cost() << endl;
   cout << endl;
  HotelReservation hotelreservation2("Hotel Booking", 25, 12, "Waldorf Astoria", 1300.0, 3);
  cout << "\nHotel Reservation Details: " << endl;
  cout << hotelreservation2.to_string() << endl;
  cout << "Total cost: $" << hotelreservation2.calculate_cost() << endl;
}

