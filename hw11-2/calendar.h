#ifndef CALENDAR_H
#define CALENDAR_H

#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Date {
    public:
        Date();
        Date(int year, int month, int day);
        ~Date();
        void NextDay(int n = 1);
        bool SetDate(int year, int month, int day);
        int getYear() const;
        int getMonth() const;
        int getDay() const;
        void setS(string s);
        static bool isLeap(int year);
    private:
        static int GetDayInYear(int year);
        static int ComputeDaysFromYearStart(int year, int month, int day);
        int year;
        int month;
        int day;
};

struct InvalidDateException {
    string input_date;
    InvalidDateException(const string& str) : input_date(str) {}
};

ostream& operator<<(ostream& os, const Date& c);
istream& operator>>(istream& is, Date& c);

#endif
