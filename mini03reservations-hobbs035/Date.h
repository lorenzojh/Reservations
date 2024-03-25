#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;

class Date {
  private:
static const int monthDays[12];
    unsigned days_;
int month_, day_;
  public:
 
     Date();

 friend ostream& operator<<(ostream& out, const Date& date);
Date& operator=(const string date);
bool operator>=(const string date) const;
bool operator<=(const string date) const;
};

#endif